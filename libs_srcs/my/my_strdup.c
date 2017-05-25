/*
** my_strdup.c for my_strdup in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 17:26:33 2017 Tiphaine LAURENT
** Last update Sun Apr 30 01:03:27 2017 Tiphaine LAURENT
*/

#include "my.h"

char		*my_strdup(char *str)
{
  char		*cpy;
  size_t	len;

  if (str == NULL)
    return (NULL);
  if ((cpy = malloc(sizeof(char *) * my_strlen(str) + 1)) == NULL)
    return (NULL);
  len = 0;
  while (str[len] != '\0')
    {
      cpy[len] = str[len];
      len += 1;
    }
  cpy[len] = '\0';
  return (cpy);
}
