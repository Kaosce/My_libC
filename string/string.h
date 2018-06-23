/*
** EPITECH PROJECT, 2017
** libC
** File description:
** string.h
*/

#ifndef LIBC_STRINGS_H
# define LIBC_STRINGS_H

# ifndef NULL
#  define NULL (void*)0
# endif /* !NULL */

typedef unsigned long size_t;

int strcasecmp(const char *s1, const char *s2);
int strncasecmp(const char *s1, const char *s2, size_t n);

char *index(const char *s, int c);
char *rindex(const char *s, int c);

char *strcpy(char *dest, const char *src);
char *strncpy(char *dest, const char *src, size_t n);

char *strcat(char *dest, const char *src);
char *strncat(char *dest, const char *src, size_t n);

char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);
char *strchrnul(const char *s, int c);

int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);

char *stpcpy(char *restrict dest, const char *src);
char *stpncpy(char *restrict dest, const char *src, size_t n);

size_t strcspn(const char *s, const char *reject);
size_t strspn(const char *s, const char *accept);

char *strdup(const char *s);

void swap(const void *a, const void *b);
char *strfry(char *string);

size_t strlen(const char *s);

char *strcat(char *dest, const char *src);
char *strncat(char *dest, const char *src, size_t n);

char *strpbrk(const char *s, const char *accept);

char *strsep(char **stringp, const char *delim);

char *strstr(const char *haystack, const char *needle);

char *strtok(char *s, const char *delim);
char *strtok_r(char *s, const char *delim, char **saveptr);

#endif /* !LIBC_STRINGS_H */
