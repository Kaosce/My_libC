/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strcspn.c
*/

#include "strings.h"

size_t strcspn(const char *s, const char *reject)
{
	size_t i = 0;
	size_t len = 0;
	for(; s[i] != 0; ++i) {
		if (index(reject, s[i]) != NULL)
			len += 1;
	}

	return len;
}
