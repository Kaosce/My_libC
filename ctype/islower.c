/*
** EPITECH PROJECT, 2017
** libC
** File description:
** islower.c
*/

#include "ctype.h"

int islower(int c)
{
	return c >= 'a' && c <= 'z';
}
