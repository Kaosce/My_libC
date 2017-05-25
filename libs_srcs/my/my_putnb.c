/*
** my_putnb.c for my_putnb in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 16:05:56 2017 Tiphaine LAURENT
** Last update Fri Apr 28 02:52:33 2017 Tiphaine LAURENT
*/

#include "my.h"

int		my_putnb(int nb)
{
  int		mod;

  if (nb < INT32_MIN || nb > INT32_MAX)
    return (-1);
  if (nb < 0)
    {
      nb = -nb;
      my_putchar('-');
    }
  if (nb >= 0 && nb <= 9)
    my_putchar(nb + '0');
  else
    {
      mod = nb % 10;
      my_putnb(nb / 10);
      my_putchar(mod + '0');
    }
  return (nb);
}
