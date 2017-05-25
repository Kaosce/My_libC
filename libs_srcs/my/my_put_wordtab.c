/*
** my_put_wordtab.c for my_put_wordtab in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 23:35:20 2017 Tiphaine LAURENT
** Last update Sat May 13 19:38:39 2017 Tiphaine LAURENT
*/

#include "my.h"

int		my_put_wordtab(char **wordtab, char delim)
{
  size_t	len;

  if (wordtab == NULL)
    return (-1);
  len = 0;
  while (wordtab[len] != NULL)
    {
      if (my_putstr(wordtab[len]) == -1)
	return (-1);
      if (my_putchar(delim) == -1)
	return (-1);
      len += 1;
    }
  return (len);
}
