/*
** arg_char.c for arg_char in /home/TiphaineLaurent/Library/V2/libs_srcs/printf
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Fri Apr 28 01:40:41 2017 Tiphaine LAURENT
** Last update Sun Apr 30 03:01:08 2017 Tiphaine LAURENT
*/

#include "printf.h"

static int	my_putchar(char c)
{
  if (write(1, &c, 1) == -1)
    return (0);
  return (1);
}

int		arg_char(va_list args)
{
  return (my_putchar((char)va_arg(args, int)));
}
