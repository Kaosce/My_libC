/*
** arg_string.c for arg_string in /home/TiphaineLaurent/Library/V2/libs_srcs/printf
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Fri Apr 28 01:47:14 2017 Tiphaine LAURENT
** Last update Sun Apr 30 02:54:15 2017 Tiphaine LAURENT
*/

#include "printf.h"

static size_t	my_strlen(const char *str)
{
  size_t	len;

  if (str == NULL)
    return (0);
  len = 0;
  while (str[len] != '\0')
    len += 1;
  return (len);
}

static int	my_putstr(const char *str)
{
  int	written;

  if (str == NULL)
    return (my_putstr("(null)"));
  if ((written = write(1, str, my_strlen(str))) == -1)
    return (0);
  return (written);
}

int		arg_string(va_list args)
{
  return (my_putstr(va_arg(args, char *)));
}
