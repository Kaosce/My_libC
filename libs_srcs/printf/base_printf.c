/*
** base_printf.c for base_printf in /home/TiphaineLaurent/Library/V2/libs_srcs/printf
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sun Apr 30 03:57:17 2017 Tiphaine LAURENT
** Last update Tue May  2 22:05:33 2017 Tiphaine LAURENT
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

char		*base_printf(size_t nbr, int base)
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
        result[length - len] = nbr % base + 87;
      nbr /= base;
      len += 1;
    }
  return (result);
}
