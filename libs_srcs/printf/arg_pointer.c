/*
** arg_pointer.c for arg_pointer in /home/TiphaineLaurent/Library/V2/libs_srcs/printf
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sun Apr 30 03:18:05 2017 Tiphaine LAURENT
** Last update Tue May  2 22:07:00 2017 Tiphaine LAURENT
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
    return (0);
  return (len);
}

int		arg_pointer(va_list args)
{
  size_t	adr;
  char		*nb_based;
  size_t	written;

  adr = va_arg(args, size_t);
  if (adr == 0)
    return (my_putstr("(nil)"));
  written = my_putstr("0x");
  nb_based = base_printf(adr, 16);
  written += my_putstr(nb_based);
  free(nb_based);
  return (written);
}
