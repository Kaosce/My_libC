/*
** EPITECH PROJECT, 2017
** libC
** File description:
** isprint.c
*/

#include "ctype.h"

int isprint(int c)
{
	return c >= US && c <= DEL;
}
