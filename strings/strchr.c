/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strchr.c
*/

#include "strings.h"

char *strchr(const char *s, int c)
{
	return index(s, c);
}
