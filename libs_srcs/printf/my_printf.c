/*
** my_printf.c for my_printf in /home/TiphaineLaurent/Library/V2/libs_srcs/printf
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Thu Apr 27 17:52:56 2017 Tiphaine LAURENT
** Last update Wed May  3 01:21:18 2017 Tiphaine LAURENT
*/

#include "printf.h"

static t_flag	g_flags[] =
  {
    {'%', &arg_perc},
    {'c', &arg_char},
    {'d', &arg_int},
    {'i', &arg_int},
    {'b', &arg_unsigned_bin},
    {'o', &arg_octal},
    {'s', &arg_string},
    {'S', &arg_string_octal},
    {'u', &arg_unsigned_int},
    {'x', &arg_unsigned_hexa},
    {'X', &arg_unsigned_hexa_upp},
    {'p', &arg_pointer},
    {'B', &arg_boolean},
    {0, NULL}
  };

static int	check_flag(const char *str, va_list args)
{
  size_t	len;
  int		written;

  len = 0;
  written = 0;
  while (g_flags[len].fonc != NULL)
    {
      if (g_flags[len].flag == *str)
	{
	  if ((written = g_flags[len].fonc(args)) == -1)
	    return (0);
	  return (written);
	}
      len += 1;
    }
  if (g_flags[len].flag == 0)
    written = write(1, &str[-1], 2);
  return (written);
}

int		my_printf(const char *str, ...)
{
  va_list	args;
  size_t	written;
  size_t	len;

  if (str == NULL)
    return (-1);
  va_start(args, str);
  written = 0;
  len = 0;
  while (str[len] != '\0')
    {
      if (str[len] == '%')
	{
	  written += check_flag(str + len + 1, args);
	  len += 1;
	}
      else
	written += write(1, &str[len], 1);
      len += 1;
    }
  return (written);
}
