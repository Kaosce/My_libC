/*
** my_puterror.c for my_puterror in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 16:47:36 2017 Tiphaine LAURENT
** Last update Sun Apr 30 00:09:23 2017 Tiphaine LAURENT
*/

#include "my.h"

int		my_puterror(const char *str)
{
  int		len;

  if (str == NULL)
    return (-1);
  len = my_strlen(str);
  if (write(2, str, len) == -1)
    return (-1);
  return (len);
}
