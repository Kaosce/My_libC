/*
** my_memcpy.c for my_memcpy in /home/TiphaineLaurent/Library/V2/libs_srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sun Apr 30 16:02:11 2017 Tiphaine LAURENT
** Last update Sun Apr 30 18:51:42 2017 Tiphaine LAURENT
*/

#include "my.h"

void		*my_memcpy(void *dest, const void *src, size_t n)
{
  size_t	len;
  char		*csrc;
  char		*cdest;

  if (dest == NULL || src == NULL)
    return (NULL);
  if (dest == src)
    return (NULL);
  csrc = (char *)src;
  cdest =  = (char *)dest;
  len = 0;
  while (csrc[len] && len <= n)
    {
      if (&csrc[len] == &cdest[len])
	return (NULL);
      cdest[len] = csrc[len];
      len += 1;
    }
  return (dest);
}
