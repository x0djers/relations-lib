#include "messages.h"

#include <stdlib.h>

#include <relations/config.h>

extern const RelationErrorMessage RU_MESSAGES[ERRORS_COUNT];
extern const RelationErrorMessage EN_MESSAGES[ERRORS_COUNT];

const RelationErrorMessage* errorMessages[LANGUAGES_COUNT] = {NULL};

void initErrorMessages() {
	errorMessages[RU_LANGUAGE] = RU_MESSAGES;
	errorMessages[EN_LANGUAGE] = EN_MESSAGES;
}

MessageLanguage getCurrentLanguage() {
	MessageLanguage currentLanguage = DEFAULT_LANGUAGE;

	if (CURRENT_LANG >= 0 && CURRENT_LANG < LANGUAGES_COUNT) {
		currentLanguage = CURRENT_LANG;
	}

	return currentLanguage;
}
