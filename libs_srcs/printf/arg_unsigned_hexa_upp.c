/*
** arg_unsigned_hexa_upp.c for arg_unsigned_hexa_upp in /home/TiphaineLaurent/Library/V2/libs_srcs/printf
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue May  2 22:25:32 2017 Tiphaine LAURENT
** Last update Tue May  2 22:52:19 2017 Tiphaine LAURENT
*/

#include "printf.h"

static size_t	my_nbrlen_base(long int nbr, int base)
{
  size_t	len;

  len = 0;
  while (nbr != 0)
    {
      nbr /= base;
      len += 1;
    }
  return (len);
}

static char		*base_printf_upp(size_t nbr, int base)
{
  char		*result;
  size_t	length;
  size_t	len;

  length = my_nbrlen_base(nbr, base);
  if ((result = malloc(sizeof(char *) * (length + 1))) == NULL)
    return (NULL);
  result[length + 1] = '\0';
  len = 1;
  while (nbr != 0)
    {
      if ((nbr % base) < 10)
        result[length - len] = nbr % base + '0';
      else if ((nbr % 16) > 9)
        result[length - len] = nbr % base + 55;
      nbr /= base;
      len += 1;
    }
  return (result);
}

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

int		arg_unsigned_hexa_upp(va_list args)
{
  char		*nb_hexa;
  size_t	nb;
  int		written;

  nb = va_arg(args, size_t);
  nb_hexa = base_printf_upp(nb, 16);
  written = my_putstr(nb_hexa);
  free(nb_hexa);
  return (written);
}
