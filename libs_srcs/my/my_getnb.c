/*
** my_getnb.c for my_getnb in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 16:56:48 2017 Tiphaine LAURENT
** Last update Sun Apr 30 00:46:54 2017 Tiphaine LAURENT
*/

#include "my.h"

int		my_getnb(char *nbr)
{
  size_t	len;
  int		nb;
  int		sign;

  if (nbr == NULL)
    return (0);
  len = 0;
  sign = 1;
  while (nbr[len] == '-' || nbr[len] == '+')
    {
      if (nbr[len] == '-')
	sign = -sign;
      len += 1;
    }
  nb = 0;
  while (nbr[len] != '\0' && my_isdigit(nbr[len]) == 1)
    {
      nb *= 10;
      nb += nbr[len] - '0';
      len += 1;
    }
  return (nb * sign);
}
