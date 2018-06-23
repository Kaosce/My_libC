/*
** EPITECH PROJECT, 2017
** libC
** File description:
** stpncpy.c
*/

#include "strings.h"

char *stpncpy(char *restrict dest, const char *src, size_t n)
{
	size_t i = 0;
	for (; src[i] != 0 && i < n; ++i) {
		dest[i] = src[i];
	}
	dest[i]  = 0;

	return &dest[i];
}
