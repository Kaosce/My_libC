/*
** EPITECH PROJECT, 2017
** libC
** File description:
** swap.c
*/

void swap(const void *a, const void *b)
{
	int c;
	int *ia = (int*)a;
	int *ib = (int*)b;

	c = *ia;
	*ia = *ib;
	*ib = c;
}
