/*
** EPITECH PROJECT, 2017
** libC
** File description:
** isdigit.c
*/

#include "ctype.h"

int isdigit(int c)
{
	return c >= '0' && c <= '9';
}
