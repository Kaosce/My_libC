/*
** my_pow.c for my_pow in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 17:01:11 2017 Tiphaine LAURENT
** Last update Wed Apr 26 00:41:34 2017 Tiphaine LAURENT
*/

#include "my.h"

double		my_pow(double nb, double power)
{
  if (nb == 0 || nb == 1)
    return ((double)nb);
  if (nb < 0 || power == 0)
    return ((double)1.0);
  power -= 1;
  if (power > 1)
    nb = my_pow(nb, power - 1);
  nb *= nb;
  return ((double)nb);
}
