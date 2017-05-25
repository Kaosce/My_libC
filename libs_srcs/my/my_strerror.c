/*
** my_strerror.c for my_strerror in /home/TiphaineLaurent/Library/V2/libs_srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sat Apr 29 23:43:51 2017 Tiphaine LAURENT
** Last update Sun Apr 30 00:04:01 2017 Tiphaine LAURENT
*/

#include "my.h"

t_error		errors[] =
  {
    {ALLOC, "Failed to alocate memory\n"},
    {OPEN, "Failed to open path\n"},
    {READ, "Failed to read"},
    {WRITE, "Failed to write"},
    {END, NULL}
  };

char		*my_strerror(size_t error)
{
  size_t	len;

  len = 0;
  while (error[len].nb != END)
    {
      if (error[len].nb == error)
	return (error[len].msg);
      len += 1;
    }
  return (NULL);
}
