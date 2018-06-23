/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strncat.c
*/

#include "strings.h"

char *strncat(char *dest, const char *src, size_t n)
{
	size_t i = strlen(dest);
	for (size_t j = 0; src[j] != 0 && j < n; ++i, ++j) {
		dest[i] = src[j];
	}
	dest[i] = 0;

	return dest;
}
