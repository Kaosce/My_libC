/*
** my_strchrnul.c for my_strchrnul in /home/TiphaineLaurent/Library/V2/libs_srcs
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sat May 27 02:54:17 2017 Tiphaine LAURENT
** Last update Sat May 27 02:57:50 2017 Tiphaine LAURENT
*/

#include "my.h"

char		*my_strchrnul(char *str, char c)
{
  size_t	len;

  if (str == NULL)
    return (NULL);
  len = 0;
  while (str[len] != '\0')
    {
      if (str[len] == c)
	return (&str[len]);
      len += 1;
    }
  return (&str[len]);
}
