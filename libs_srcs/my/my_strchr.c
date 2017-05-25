/*
** my_strchr.c for my_strchr in /home/TiphaineLaurent/Library/V2/libs_srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sat Apr 29 22:53:26 2017 Tiphaine LAURENT
** Last update Sun Apr 30 01:49:40 2017 Tiphaine LAURENT
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
	return (my_strdup(&str[len]));
      len += 1;
    }
  return (str);
}
