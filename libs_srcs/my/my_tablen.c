/*
** my_tablen.c for my_tablen in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 23:32:48 2017 Tiphaine LAURENT
** Last update Sun Apr 30 00:13:09 2017 Tiphaine LAURENT
*/

#include "my.h"

size_t		my_tablen(const char **tab)
{
  size_t	len;

  if (tab == NULL)
    return (-1);
  len = 0;
  while (tab[len])
    len += 1;
  return (len);
}
