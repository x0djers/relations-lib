#include "../messages.h"

const RelationErrorMessage RU_MESSAGES[] = {
	[NONE_ERROR] = {NONE_ERROR, "Операция завершена успешно."},
	[MEMORY_ALLOCATION_ERROR] = {MEMORY_ALLOCATION_ERROR,
								"Не удалось выделить память."},
	[INVALID_ELEMENT_ERROR] = {INVALID_ELEMENT_ERROR, "Недопустимый элемент отношения."},
	[NULL_POINTER_ERROR] = {NULL_POINTER_ERROR,
						   "Ошибка указателя. Передан нулевой указатель."},
	[SIZE_MISMATCH_ERROR] = {SIZE_MISMATCH_ERROR,
							"Ошибка несоответствия размеров матриц."},
	[PREPARE_BUFFER_ERROR] = {PREPARE_BUFFER_ERROR,
							 "Не удалось подготовить строковое представление."},
	[FILE_OPEN_ERROR] = {FILE_OPEN_ERROR, "Не удалось открыть файл."},
	[FILE_READ_ERROR] = {FILE_READ_ERROR, "Не удалось прочитать файл."},
	[UNKNOWN_ERROR] = {UNKNOWN_ERROR, "Неизвестная ошибка."},
};