/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strcpy.c
*/

#include "strings.h"

char *strcpy(char *dest, const char *src)
{
	size_t i = 0;
	for (; src[i] != 0; ++i) {
		dest[i] = src[i];
	}
	dest[i] = 0;

	return dest;
}
