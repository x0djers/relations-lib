#include <relations/operations.h>

RelationOutcome loadRelationFromFile(const char* file) {
    RelationOutcome outcome = {.errorCode = RELATION_NONE_ERROR};
    if (file ==  NULL) {
        outcome.errorCode = RELATION_NULL_POINTER_ERROR;
    } else {
        MatrixOutcome matrix = loadMatrixFromFile(file);

        if (matrix.errorCode != NONE_ERROR) {
            outcome.errorCode = RELATION_FILE_READ_ERROR;
            freeMatrixOutcome(&matrix);
        } else {
            outcome.relation.matrix = matrix;
        }
    }

    return outcome;
}

void freeRelationOutcome(RelationOutcome* outcome) {
    if (outcome != NULL) {
        freeMatrixOutcome(&outcome->relation.matrix);
        outcome->errorCode = RELATION_NONE_ERROR;
    }
}
