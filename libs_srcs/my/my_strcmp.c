/*
** my_strcmp.c for my_strcmp in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 17:37:50 2017 Tiphaine LAURENT
** Last update Sun Apr 30 00:43:02 2017 Tiphaine LAURENT
*/

#include "my.h"

bool		my_strcmp(const char *str1, const char *str2)
{
  size_t	len;

  if (str1 == NULL || str2 == NULL)
    return (false);
  len = 0;
  while (str1[len] != '\0' && str2[len] != '\0')
    {
      if (str1[len] != str2[len])
	return (false);
      len += 1;
    }
  return (true);
}
