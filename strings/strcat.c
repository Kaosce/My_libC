/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strcat.c
*/

#include "strings.h"

char *strcat(char *dest, const char *src)
{
	size_t i = strlen(dest);
	for (size_t j = 0; src[j] != 0; ++i, ++j) {
		dest[i] = src[j];
	}
	dest[i] = 0;

	return dest;
}
