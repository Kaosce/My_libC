/*
** EPITECH PROJECT, 2017
** libC
** File description:
** test.c
*/

#include <stdio.h>

#include "ctype/ctype.h"
#include "string/string.h"

int main(void)
{
	printf("%c\n", tolower('z'));
	printf("%c\n", tolower('Z'));

	printf("%c\n", toupper('z'));
	printf("%c\n", toupper('Z'));

	printf("%d\n", strcasecmp("test", "test"));
	printf("%d\n", strcasecmp("test2", "test1"));
	printf("%d\n", strcasecmp("test1", "test2"));

	printf("%d\n", strncasecmp("test", "test", 4));
	printf("%d\n", strncasecmp("test2", "test1", 5));
	printf("%d\n", strncasecmp("test1", "test2", 5));

	printf("%d\n", strcmp("test", "test"));
	printf("%d\n", strcmp("test2", "test1"));
	printf("%d\n", strcmp("test1", "test2"));

	return 0;
}
