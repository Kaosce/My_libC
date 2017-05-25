/*
** my_swap.c for my_swap in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 16:29:12 2017 Tiphaine LAURENT
** Last update Tue May  2 21:40:48 2017 Tiphaine LAURENT
*/

#include "my.h"

int		my_swap(const void *a, const void *b)
{
  int		c;
  int		*ia;
  int		*ib;

  if (a == NULL || b == NULL)
    return (-1);
  ia = (int *)a;
  ib = (int *)b;
  c = *ia;
  *ia = *ib;
  *ib = c;
  return (0);
}
