/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strlen.c
*/

#include "string.h"

size_t strlen(const char *s)
{
	size_t i = 0;
	for (; s[i] != 0; ++i);

	return i;
}
