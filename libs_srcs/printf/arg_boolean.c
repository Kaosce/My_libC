/*
** arg_boolean.c for arg_boolean in /home/TiphaineLaurent/Library/V2/libs_srcs/printf
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Wed May  3 00:27:08 2017 Tiphaine LAURENT
** Last update Wed May  3 01:11:36 2017 Tiphaine LAURENT
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
  size_t	len;

  if (str == NULL)
    return (0);
  len = my_strlen(str);
  if (write(1, str, len) == -1)
    return (-1);
  return (len);
}

int		arg_boolean(va_list args)
{
  bool		is;
  int		written;

  is = (bool)va_arg(args, int);
  if (is == true)
    written = my_putstr("true");
  else if (is == false)
    written = my_putstr("false");
  return (written);
}
