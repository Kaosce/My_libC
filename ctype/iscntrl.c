/*
** EPITECH PROJECT, 2017
** libC
** File description:
** iscntrl.c
*/

#include "ctype.h"

int iscntrl(int c)
{
	return c >= NUL && c <= US;
}
