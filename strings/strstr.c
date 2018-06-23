/*
** EPITECH PROJECT, 2017
** libC
** File description:
** strstr.c
*/

#include "strings.h"

static int compare_substr(const char *s1, const char *s2, size_t n)
{
	size_t cmp = 0;
	for (size_t i = 0; s1[i] != 0 && s2[i] && i < n; ++i) {
		if (s1[i] == s2[i]) {
			cmp += 1;
		}
	}
	return cmp == n;
}

char *strstr(const char *haystack, const char *needle)
{
	size_t needlen = strlen(needle);
	size_t haylen = strlen(haystack);

	for (size_t i = 0; haylen - i > needlen; ++i) {
		if (compare_substr(&haystack[i], needle, needlen))
			return (char*)&haystack[i];
	}

	return NULL;
}
