/*
** my_putchar.c for my_putchar in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 15:54:15 2017 Tiphaine LAURENT
** Last update Sun Apr 30 00:08:28 2017 Tiphaine LAURENT
*/

#include "my.h"

int		my_putchar(char c)
{
  if (write(1, &c, 1) == -1)
    return (-1);
  return (1);
}
