/*
** my_str_isdigit.c for my_str_isdigit in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 16:02:56 2017 Tiphaine LAURENT
** Last update Sun Apr 30 00:42:22 2017 Tiphaine LAURENT
*/

#include "my.h"

bool		my_str_isdigit(const char *str)
{
  size_t	len;

  if (str == NULL)
    return (false);
  len = 0;
  while (str[len] != '\0')
    {
      if (my_isdigit(str[len]) == false)
	return (false);
      len += 1;
    }
  return (true);
}
