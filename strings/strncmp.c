/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strncmp.c
*/

#include "strings.h"

int strncmp(const char *s1, const char *s2, size_t n)
{
	for (size_t i = 0; s1[i] != 0 && s2[i] && i < n; ++i) {
		if (s1[i] != s2[i]) {
			if (s1[i] > s2[i])
				return 1;
			else
				return -1;
		}
	}
	return 0;
}
