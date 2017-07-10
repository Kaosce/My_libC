/*
** my_strndup.c for my_strndup in /home/tiphaine/my_libC
** 
** Made by Tiphaine
** Login   <tiphaine.laurent@epitech.eu>
** 
** Started on  Mon Jul 10 15:35:30 2017 Tiphaine
** Last update Mon Jul 10 15:45:10 2017 Tiphaine
*/

#include "my.h"

char		*my_strndup(const char *str, size_t n)
{
  char		*ret;
  size_t	index;

  if (str == NULL || (ret = malloc(sizeof(char) * (n + 1))) == NULL)
    return (NULL);
  index = 0;
  while (index < n && str[n] != EOF)
    {
      ret[index] = str[index];
      index += 1;
    }
  ret[index] = EOF;
  return (ret);
}
