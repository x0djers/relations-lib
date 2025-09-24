#include "../messages.h"

const RelationErrorMessage EN_MESSAGES[] = {
	[NONE_ERROR] = {NONE_ERROR, "Operation completed successfully."},
	[MEMORY_ALLOCATION_ERROR] = {MEMORY_ALLOCATION_ERROR,
								 "Failed to allocate memory."},
	[INVALID_ELEMENT_ERROR] = {INVALID_ELEMENT_ERROR, "Invalid relation element."},
	[NULL_POINTER_ERROR] = {NULL_POINTER_ERROR,
							"Pointer error. A null pointer has been passed."},
	[SIZE_MISMATCH_ERROR] =
		{SIZE_MISMATCH_ERROR,
		 "Error in the disobedience of the size of the matrices."},
	[PREPARE_BUFFER_ERROR] = {PREPARE_BUFFER_ERROR,
							  "Failed to prepare string representation."},
	[FILE_OPEN_ERROR] = {FILE_OPEN_ERROR, "Failed to open file."},
	[FILE_READ_ERROR] = {FILE_READ_ERROR, "Failed to read file."},
	[UNKNOWN_ERROR] = {UNKNOWN_ERROR, "Unknown error."},
};