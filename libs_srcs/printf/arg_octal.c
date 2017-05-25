/*
** arg_octal.c for arg_octal in /home/TiphaineLaurent/Library/V2/libs_srcs/printf
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue May  2 21:45:17 2017 Tiphaine LAURENT
** Last update Tue May  2 21:53:51 2017 Tiphaine LAURENT
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
    return (-1);
  len = my_strlen(str);
  if (write(1, str, len) == -1)
    return (-1);
  return (len);
}

int		arg_octal(va_list args)
{
  char		*nb_octal;
  int		written;
  long int	nb;

  nb = va_arg(args, long int);
  nb_octal = base_printf(nb, 8);
  written = my_putstr(nb_octal);
  free(nb_octal);
  return (written);
}
