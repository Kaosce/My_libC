/*
** EPITECH PROJECT, 2017
** libC
** File description:
** isupper.c
*/

#include "ctype.h"

int isupper(int c)
{
	return c >= 'A' && c <= 'Z';
}
