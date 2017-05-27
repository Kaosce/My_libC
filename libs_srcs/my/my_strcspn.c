/*
** my_strcspn.c for my_strcspn in /home/TiphaineLaurent/Library/V2/libs_srcs
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sat May 27 03:24:26 2017 Tiphaine LAURENT
** Last update Sat May 27 03:33:12 2017 Tiphaine LAURENT
*/

#include "my.h"

size_t		my_strcspn(const char *str, const char *reject)
{
  size_t	len;
  size_t	rejected;

  if (str == NULL)
    return (0);
  len = 0;
  rejected = 0;
  while (str[len] != '\0')
    {
      if (my_strchr((char *)reject, str[len]) != NULL)
	rejected += 1;
      len += 1;
    }
  return (len - rejected);
}
