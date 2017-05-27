/*
** my_strfry.c for my_strfry in /home/TiphaineLaurent/Library/V2/libs_srcs
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sat May 27 03:34:46 2017 Tiphaine LAURENT
** Last update Sat May 27 04:16:24 2017 Tiphaine LAURENT
*/

#include <time.h>
#include "my.h"

char		*my_strfry(char *str)
{
  size_t	iteration;
  size_t	len;

  if (str == NULL)
    return (NULL);
  srand(clock());
  len = my_strlen(str);
  if (len <= 3)
    return (str);
  len -= 3;
  iteration = len + 1;
  while (iteration > 0)
    {
      my_swap(&str[rand() % len], &str[rand() % len]);
      iteration -= 1;
    }
  return (str);
}
