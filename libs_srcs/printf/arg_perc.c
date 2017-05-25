/*
** arg_perc.c for arg_perc in /home/TiphaineLaurent/Library/V2/libs_srcs/printf
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sun Apr 30 03:06:47 2017 Tiphaine LAURENT
** Last update Sun Apr 30 03:08:29 2017 Tiphaine LAURENT
*/

#include "printf.h"

static int	my_putchar(char c)
{
  if (write(1, &c, 1) == -1)
    return (0);
  return (1);
}

int		arg_perc(va_list args)
{
  args = args;
  return (my_putchar('%'));
}
