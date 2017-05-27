/*
** my_strcatdup.c for my_strcatdup in /home/TiphaineLaurent/Library/V2/libs_srcs
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sat May 27 02:11:45 2017 Tiphaine LAURENT
** Last update Sat May 27 02:27:17 2017 Tiphaine LAURENT
*/

#include "my.h"

char		*my_strcatdup(char *dest, char *src)
{
  char		*ret;

  if (dest == NULL)
    return (my_strdup(src));
  if (src == NULL)
    return (my_strdup(dest));
  if ((ret = malloc(sizeof(char) * (my_strlen(dest) +
				    my_strlen(src) + 1))) == NULL)
    return (NULL);
  ret = my_strcpy(ret, dest);
  ret = my_strcat(ret, src);
  return (ret);
}
