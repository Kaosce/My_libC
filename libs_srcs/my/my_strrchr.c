/*
** my_strrchr.c for strrchr in /home/TiphaineLaurent/Library/V2/libs_srcs
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sat May 27 02:42:24 2017 Tiphaine LAURENT
** Last update Sat May 27 02:52:54 2017 Tiphaine LAURENT
*/

#include "my.h"

char		*my_strrchr(char *str, char c)
{
  size_t	len;

  if (str == NULL)
    return (NULL);
  len = my_strlen(str) + 1;
  while (len > 0)
    {
      if (str[len] == c)
	return (&str[len]);
      len -= 1;
    }
  return (NULL);
}
