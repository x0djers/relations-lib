#include "../messages.h"

const RelationErrorMessage RU_MESSAGES[] = {
    [RELATION_NONE_ERROR] = {
        RELATION_NONE_ERROR,
        "Операция завершена успешно."
    },
    [RELATION_MEMORY_ALLOCATION_ERROR] = {
        RELATION_MEMORY_ALLOCATION_ERROR,
        "Не удалось выделить память."
    },
    [RELATION_ELEMENT_ERROR] = {
        RELATION_ELEMENT_ERROR,
        "Недопустимый элемент отношения."
    },
    [RELATION_NULL_POINTER_ERROR] = {
        RELATION_NULL_POINTER_ERROR,
        "Ошибка указателя. Передан нулевой указатель."
    },
    [RELATION_SIZE_MISMATCH_ERROR] = {
        RELATION_SIZE_MISMATCH_ERROR,
        "Ошибка несоответствия размеров матриц."
    },
    [RELATION_PREPARE_BUFFER_ERROR] = {
        RELATION_PREPARE_BUFFER_ERROR,
        "Не удалось подготовить строковое представление."
    },
    [RELATION_FILE_OPEN_ERROR] = {
        RELATION_FILE_OPEN_ERROR,
        "Не удалось открыть файл."
    },
    [RELATION_FILE_READ_ERROR] = {
        RELATION_FILE_READ_ERROR,
        "Не удалось прочитать файл."
    },
    [RELATION_UNKNOWN_ERROR] = {
        RELATION_UNKNOWN_ERROR,
        "Неизвестная ошибка."
    },
};
