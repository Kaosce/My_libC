/*
** my_sqrt.c for my_sqrt in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 17:14:43 2017 Tiphaine LAURENT
** Last update Sun Apr 30 00:56:25 2017 Tiphaine LAURENT
*/

#include "my.h"

double		my_sqrt(double nb)
{
  size_t	root;

  if (nb == 0)
    return (-1);
  root = 1;
  while (root * root < nb)
    root += 1;
  if (root * root == nb)
    return ((double)root);
  return (0);
}
