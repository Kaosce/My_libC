/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strpbrk.c
*/

#include "string.h"

char *strpbrk(const char *s, const char *accept)
{
	for (size_t i = 0; s[i] != 0; ++i) {
		if (index(accept, s[i]) != NULL)
			return (char*)&s[i];
	}

	return NULL;
}
