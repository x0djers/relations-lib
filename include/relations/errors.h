#ifndef RELATIONS_ERRORS_H
#define RELATIONS_ERRORS_H

/**
  @enum RelationErrorCode
  @brief Перечисление всех возможных кодов ошибок, связанных с работой с
  отношениями.
*/
typedef enum {
    NONE_ERROR,				  ///< Операция выполнена без ошибки.
    MEMORY_ALLOCATION_ERROR,  ///< Ошибка выделения памяти.
    INVALID_ELEMENT_ERROR, /// Ошибка неверного элемента отношения.
    NULL_POINTER_ERROR,		///< Ошибка нулевого указателя.
    SIZE_MISMATCH_ERROR,	///< Ошибка несовпадения размеров.
    PREPARE_BUFFER_ERROR,	  ///< Ошибка подготовки строкового представления.
    FILE_OPEN_ERROR,		  ///< Ошибка открытия файла.
    FILE_READ_ERROR,		  ///< Ошибка чтения файла.
    UNKNOWN_ERROR,			  ///< Неизвестная ошибка.
    ERRORS_COUNT,			  ///< Количество ошибок (служебное значение).
} RelationErrorCode;

/**
  @struct RelatonErrorMessage
  @brief Структура, описывающая сообщение об ошибке.
  Используется для отображения текстовых описаний ошибок на разных языках.
*/
typedef struct {
    RelationErrorCode code;
    const char* message;
} RelationErrorMessage;

/**
  @enum MessageLanguage
  @brief Языки, поддерживаемые для отображения сообщений об ошибках.
*/
typedef enum {
    RU_LANGUAGE,
    EN_LANGUAGE,
    LANGUAGES_COUNT,
} MessageLanguage;

/**
  @brief Получает текстовое описание ошибки по коду.
  Функция возвращает строку с описанием ошибки на языке, заданном в конфиге.
  Если язык задан некорректно, то используется язык по умолчанию (обычно
  `EN_LANGUAGE`).
  @param code Код ошибки из перечисления RelationErrorCode.
  @return Строка с описанием ошибки.
*/
const char* getErrorMessage(RelationErrorCode code);

#endif
