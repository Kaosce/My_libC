/*
** my_isalpha.c for my_isalpha in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 15:55:12 2017 Tiphaine LAURENT
** Last update Sun Apr 30 00:39:10 2017 Tiphaine LAURENT
*/

#include "my.h"

bool		my_isalpha(const char c)
{
  if (c >= 'a' && c <= 'z')
    return (true);
  else if (c >= 'A' && c <= 'Z')
    return (true);
  return (false);
}
