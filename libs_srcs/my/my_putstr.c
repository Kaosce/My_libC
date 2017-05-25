/*
** my_putstr.c for my_putstr in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 16:39:04 2017 Tiphaine LAURENT
** Last update Sun Apr 30 17:06:50 2017 Tiphaine LAURENT
*/

#include "my.h"

int		my_putstr(const char *str)
{
  int		len;

  if (str == NULL)
    return (my_putstr("(null)"));
  len = my_strlen(str);
  if (write(1, str, len) == -1)
    return (-1);
  return (len);
}
