/*
** my_strcasecmp.c for my_strcasecmp in /home/TiphaineLaurent/Library/V2/libs_srcs
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sat May 27 03:01:58 2017 Tiphaine LAURENT
** Last update Sat May 27 03:13:28 2017 Tiphaine LAURENT
*/

#include "my.h"

static bool	check_char(char c1, char c2)
{
  if (c1 >= 'A' && c1 <= 'Z')
    c1 += 32;
  if (c2 >= 'A' && c2 <= 'Z')
    c2 += 32;
  if (c1 == c2)
    return (true);
  return (false);
}

bool		my_strcasecmp(const char *str1, const char *str2)
{
  size_t	len;

  if (str1 == NULL || str2 == NULL)
    return (false);
  if (my_strlen(str1) != my_strlen(str2))
    return (false);
  len = 0;
  while (str1[len] != '\0' && str2[len] != '\0')
    {
      if (!check_char(str1[len], str2[len]))
	return (false);
      len += 1;
    }
  return (true);
}
