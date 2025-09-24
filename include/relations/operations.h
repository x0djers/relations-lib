#ifndef OPERATIONS_H
#define OPERATIONS_H

#include <matrix/matrix.h>

#include <relations/errors.h>

typedef struct {
    MatrixOutcome matrix;
} Relation;

typedef struct {
    Relation relation;
    RelationErrorCode errorCode;
} RelationOutcome;

RelationOutcome loadRelationFromFile(const char* file);
void freeRelationOutcome(RelationOutcome* outcome);

#endif

