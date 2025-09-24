#include "../messages.h"

const RelationErrorMessage EN_MESSAGES[] = {
    [RELATION_NONE_ERROR] = {
        RELATION_NONE_ERROR,
        "Operation completed successfully."
    },
    [RELATION_MEMORY_ALLOCATION_ERROR] = {
        RELATION_MEMORY_ALLOCATION_ERROR,
        "Failed to allocate memory."
    },
    [RELATION_ELEMENT_ERROR] = {
        RELATION_ELEMENT_ERROR,
        "Invalid relation element."
    },
    [RELATION_NULL_POINTER_ERROR] = {
        RELATION_NULL_POINTER_ERROR,
        "Pointer error. A null pointer has been passed."
    },
    [RELATION_SIZE_MISMATCH_ERROR] =
    {
        RELATION_SIZE_MISMATCH_ERROR,
        "Error in the disobedience of the size of the matrices."
    },
    [RELATION_PREPARE_BUFFER_ERROR] = {
        RELATION_PREPARE_BUFFER_ERROR,
        "Failed to prepare string representation."
    },
    [RELATION_FILE_OPEN_ERROR] = {
        RELATION_FILE_OPEN_ERROR,
        "Failed to open file."
    },
    [RELATION_FILE_READ_ERROR] = {
        RELATION_FILE_READ_ERROR,
        "Failed to read file."
    },
    [RELATION_UNKNOWN_ERROR] = {
        RELATION_UNKNOWN_ERROR,
        "Unknown error."
    },
};
