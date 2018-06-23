/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strtok_r.c
*/

#include "strings.h"

char *strtok_r(char *s, const char *delim, char **saveptr)
{
	if (s != NULL)
		*saveptr = s;
	return strsep(saveptr, delim);
}
