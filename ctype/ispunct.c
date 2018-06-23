/*
** EPITECH PROJECT, 2017
** libC
** File description:
** ispunct.c
*/

#include "ctype.h"

int ispunct(int c)
{
	return isgraph(c) && !isalnum(c);
}
