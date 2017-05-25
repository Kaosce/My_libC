/*
** my_strncpy.c for my_strncpy in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 17:26:33 2017 Tiphaine LAURENT
** Last update Sun Apr 30 01:00:09 2017 Tiphaine LAURENT
*/

#include "my.h"

char		*my_strncpy(char *dest, char *src, size_t n)
{
  size_t	len;

  if (src == NULL)
    return (NULL);
  len = 0;
  while (src[len] != '\0' && dest[len] != '\0' && len <= n)
    {
      dest[len] = src[len];
      len += 1;
    }
  dest[len] = '\0';
  return (dest);
}
