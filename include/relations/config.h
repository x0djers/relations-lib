/**
@file config.h
  @author x0djers
  @brief Конфигурационный файл для настройки параметров библиотеки.
  Содержит основные макросы и определения типов, используемых в проекте.
  Позволяет централизованно управлять директориями, буферами, форматами вывода
  и типами данных.
*/

#ifndef RELATION_CONFIG_H
#define RELATION_CONFIG_H

/**
  @def CURRENT_LANG
  @brief Язык для сообщений об ошибках.
  Возможные значения:
  - ::RU_LANGUAGE — русский язык (значение 0)
  - ::EN_LANGUAGE — английский язык (значение 1)
  @see MessageLanguage
*/
#define CURRENT_LANG 0

#endif
