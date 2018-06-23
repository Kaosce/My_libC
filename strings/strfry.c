/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strfry.c
*/

#include <stdlib.h>

#include "strings.h"

char *strfry(char *string)
{
	size_t len = strlen(string);
	for (size_t i = 0; string[i] != 0; ++i) {
		swap(&string[i], &string[rand() % len]);
	}

	return string;
}
