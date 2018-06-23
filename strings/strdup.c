/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strdup.c
*/

#include <stdlib.h>

#include "strings.h"

char *strdup(const char *s)
{
	size_t len = strlen(s);
	char *str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return NULL;
	return strcpy(str, s);
}
