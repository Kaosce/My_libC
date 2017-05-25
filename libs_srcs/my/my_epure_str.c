/*
** my_epure_str.c for my_epure_str in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 23:08:11 2017 Tiphaine LAURENT
** Last update Sun Apr 30 00:19:34 2017 Tiphaine LAURENT
*/

#include "my.h"

static size_t	len_epured(const char *str, char to_epure)
{
  size_t	len;
  size_t	to_remove;

  len = 0;
  to_remove = 0;
  while (str[len] != '\0')
    {
      if (str[len] == to_epure)
	to_remove += 1;
      len += 1;
    }
  return (my_strlen(str) - to_remove);
}

char		*my_epure_str(char *str, char to_epure)
{
  char		*ret;
  size_t	len_str;
  size_t	len_ret;

  if (str == NULL)
    return (NULL);
  if ((ret = malloc(sizeof(char *) * (len_epured(str, to_epure) + 1))) == NULL)
    return (NULL);
  len_str = 0;
  len_ret = 0;
  while (str[len_str] != '\0')
    {
      if (str[len_str] != to_epure)
	{
	  ret[len_ret] = str[len_str];
	  len_ret += 1;
	}
      len_str += 1;
    }
  ret[len_ret] = '\0';
  return (ret);
}
