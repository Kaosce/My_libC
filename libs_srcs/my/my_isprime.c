/*
** my_isprime.c for my_isprime in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 17:18:20 2017 Tiphaine LAURENT
** Last update Sun Apr 30 01:02:43 2017 Tiphaine LAURENT
*/

#include "my.h"

bool		my_isprime(int nb)
{
  int		test;

  if (nb <= 1)
    return (false);
  test = 2;
  while (test < nb)
    {
      if ((nb % test) == 0)
	return (false);
      test += 1;
    }
  return (true);
}
