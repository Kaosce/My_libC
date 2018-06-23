/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strtok.c
*/

#include "string.h"

char *strtok(char *s, const char *delim)
{
	static char *scpy = NULL;

	if (s != NULL)
		scpy = s;
	return strsep(&scpy, delim);
}
