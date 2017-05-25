/*
** arg_int.c for arg_int in /home/TiphaineLaurent/Library/V2/libs_srcs/printf
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Fri Apr 28 02:27:54 2017 Tiphaine LAURENT
** Last update Sun Apr 30 03:05:14 2017 Tiphaine LAURENT
*/

#include "printf.h"

static int	my_putchar(char c)
{
  if (write(1, &c, 1) == -1)
    return (0);
  return (1);
}

static int	my_nblen(int nb)
{
  int		len;

  len = 0;
  while (nb != 0)
    {
      nb /= 10;
      len += 1;
    }
  return (len);
}

static int	my_putnb(unsigned int nb)
{
  int		mod;

  if (nb <= 9)
    my_putchar(nb + '0');
  else
    {
      mod = nb % 10;
      my_putnb(nb / 10);
      my_putchar(mod + '0');
    }
  return (my_nblen(nb));
}

int		arg_unsigned_int(va_list args)
{
  return (my_putnb(va_arg(args, unsigned int)));
}
