/*
** my_revstr.c for my_revstr in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 23:37:58 2017 Tiphaine LAURENT
** Last update Sun Apr 30 00:20:10 2017 Tiphaine LAURENT
*/

#include "my.h"

char		*my_revstr(char *str)
{
  char		*rev;
  size_t	len_str;
  size_t	len_rev;

  if (str == NULL)
    return (NULL);
  len_str = my_strlen(str);
  if ((rev = malloc(sizeof(char *) * (len_str + 1))) == NULL)
    return (NULL);
  len_rev = 0;
  while (str[len_rev] != '\0')
    {
      rev[len_rev] = str[len_str];
      len_rev += 1;
      len_str -= 1;
    }
  rev[len_rev] = '\0';
  return (rev);
}
