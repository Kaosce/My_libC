/*
** my_realloc.c for my_realloc in /home/TiphaineLaurent/Library/V2/libs_srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sun Apr 30 15:59:29 2017 Tiphaine LAURENT
** Last update Sun Apr 30 18:19:50 2017 Tiphaine LAURENT
*/

#include "my.h"
#include <string.h>

void		*my_realloc(void *ptr, size_t size)
{
  void		*newptr;

  if (ptr == NULL)
    return (newptr = malloc(size));
  if (size == 0)
    {
      free(ptr);
      return (NULL);
    }
  if ((newptr = malloc(size)) == NULL)
    return (NULL);
  my_memcpy(newptr, ptr, size);
  free(ptr);
  return (newptr);
}
