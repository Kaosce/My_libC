/*
** EPITECH PROJECT, 2017
** libC
** File description:
** index.c
*/

#include "string.h"

char *index(const char *s, int c)
{
	size_t i = 0;
	for (; s[i] != 0 ; ++i) {
		if (s[i] == c)
			break;
	}

	return (char*)&s[i];
}
