/*
** my_strchr.c for my_strchr in /home/TiphaineLaurent/Library/V2/libs_srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sat Apr 29 22:53:26 2017 Tiphaine LAURENT
** Last update Sat May 27 02:53:56 2017 Tiphaine LAURENT
*/

#include "my.h"

char		*my_strchr(char *str, char c)
{
  size_t	len;

  if (str == NULL)
    return (NULL);
  len = 0;
  while(str[len] != '\0')
    {
      if (str[len] == c)
	return (&str[len]);
      len += 1;
    }
  return (NULL);
}
