/*
** my_strcat.c for my_strcat in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 23:17:24 2017 Tiphaine LAURENT
** Last update Mon May  8 05:06:22 2017 Tiphaine LAURENT
*/

#include "my.h"

static char	*cat(char *dest, char *src)
{
  size_t	len_dest;
  size_t	len_src;

  len_dest = my_strlen(dest);
  len_src = 0;
  while (src[len_src] != '\0')
    {
      dest[len_dest] = src[len_src];
      len_src += 1;
      len_dest += 1;
    }
  dest[len_dest] = '\0';
  return (dest);
}

char		*my_strcat(char *dest, char *src)
{
  char		*ret;
  size_t	len_src;

  if (dest == NULL && src == NULL)
    return (NULL);
  else if (dest != NULL && src == NULL)
    return (dest);
  len_src = my_strlen(src);
  if ((ret = malloc(sizeof(char *) * (len_src + 1))) == NULL)
    return (NULL);
  ret = cat(ret, dest);
  ret = cat(ret, src);
  return (ret);
}
