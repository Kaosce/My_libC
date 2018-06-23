/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strsep.c
*/

#include "string.h"

char *strsep(char **stringp, const char *delim)
{
	if (*stringp == NULL)
		return NULL;

	char *token = *stringp;
	for (size_t i = 0; *stringp[i] != 0; ++i) {
		if (index(delim, *stringp[i]) != NULL) {
			*stringp[i] = 0;
			*stringp = &(*stringp[i]);
			break;
		}
	}

	return token;
}
