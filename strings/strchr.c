/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strchr.c
*/

#include "string.h"

char *strchr(const char *s, int c)
{
	return index(s, c);
}
