/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strspn.c
*/

#include "string.h"

size_t strspn(const char *s, const char *accept)
{
	size_t i = 0;
	size_t len = 0;
	for (; s[i] != 0; ++i) {
		if (index(accept, s[i]) != NULL)
			len += 1;
	}

	return len;
}
