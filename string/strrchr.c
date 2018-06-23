/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strrchr.c
*/

#include "string.h"

char *strrchr(const char *s, int c)
{
	return rindex(s, c);
}
