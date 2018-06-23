/*
** EPITECH PROJECT, 2017
** libC
** File description:
** isspace.c
*/

#include "ctype.h"

int isspace(int c)
{
	return c == SPACE
	       || c == FF
	       || c == LF
	       || c == CR
	       || c == HT
	       || c == VT;
}
