/*
** EPITECH PROJECT, 2017
** libC
** File description:
** isxdigit.c
*/

#include "ctype.h"

int isxdigit(int c)
{
	return (c >= '0' && c <= '9')
	       || (c >= 'A' && c <= 'F')
	       || (c >= 'a' && c <= 'z');
}
