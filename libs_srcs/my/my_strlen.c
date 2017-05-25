/*
** my_strlen.c for my_strlen in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 16:52:21 2017 Tiphaine LAURENT
** Last update Sun Apr 30 00:10:06 2017 Tiphaine LAURENT
*/

#include "my.h"

size_t		my_strlen(const char *str)
{
  size_t	len;

  if (str == NULL)
    return (0);
  len = 0;
  while (str[len] != '\0')
    len += 1;
  return (len);
}
