/*
** arg_unsigned_bin.c for arg_unsigned_bin in /home/TiphaineLaurent/Library/V2/libs_srcs/printf
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue May  2 22:00:08 2017 Tiphaine LAURENT
** Last update Tue May  2 22:08:11 2017 Tiphaine LAURENT
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

int		arg_unsigned_bin(va_list args)
{
  char		*nb_bin;
  int		written;
  size_t	nb;

  nb = va_arg(args, size_t);
  nb_bin = base_printf(nb, 2);
  written = my_putstr(nb_bin);
  free(nb_bin);
  return (written);
}
