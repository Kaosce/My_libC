/*
** my_strpbrk.c for my_strpbrk in /home/TiphaineLaurent/Library/V2/libs_srcs
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sat May 27 04:18:27 2017 Tiphaine LAURENT
** Last update Sat May 27 04:32:54 2017 Tiphaine LAURENT
*/

#include "my.h"

char		*my_strpbrk(const char *str, const char *accept)
{
  size_t	len;

  if (str == NULL)
    return (NULL);
  len = 0;
  while (str[len] != '\0')
    {
      if (my_strchr((char *)accept, str[len]) != NULL)
	return ((char *)&str[len]);
      len += 1;
    }
  return (NULL);
}
