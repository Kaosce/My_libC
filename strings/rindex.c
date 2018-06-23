/*
** EPITECH PROJECT, 2017
** libC
** File description:
** rindex.c
*/

#include "string.h"

char *rindex(const char *s, int c)
{
	size_t i = strlen(s);
	for (; i > 0 ; --i) {
		if (s[i] == c)
			break;
	}

	return (char*)&s[i];
}
