/*
** EPITECH PROJECT, 2017
** libC
** File description:
** isalpha.c
*/

#include "ctype.h"

int isalpha(int c)
{
	return (c >= 'A' && c <= 'Z')
	       || (c >= 'a' && c <= 'z');
}
