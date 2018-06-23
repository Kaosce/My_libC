/*
** EPITECH PROJECT, 2017
** libC
** File description:
** toupper.c
*/

#include "ctype.h"

int toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return c + UPPER_DIFFERENCE;
	return c;
}
