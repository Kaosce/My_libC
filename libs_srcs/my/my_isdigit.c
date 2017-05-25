/*
** my_isdigit.c for my_isdigit in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 15:58:09 2017 Tiphaine LAURENT
** Last update Sun Apr 30 00:39:44 2017 Tiphaine LAURENT
*/

#include "my.h"

bool		my_isdigit(const char c)
{
  if (c >= '0' && c <= '9')
    return (true);
  return (false);
}
