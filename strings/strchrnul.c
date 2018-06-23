/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strchrnul.c
*/

#include "string.h"

char *strchrnul(const char *s, int c)
{
	char *ptr = index(s, c);

	if (ptr == NULL)
		return NULL;
	return ptr;
}
