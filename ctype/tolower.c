/*
** EPITECH PROJECT, 2017
** libC
** File description:
** tolower.c
*/

#include "ctype.h"

int tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return c + LOWER_DIFFERENCE;
	return c;
}
