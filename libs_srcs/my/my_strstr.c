/*
** my_strstr.c for my_strstr in /home/TiphaineLaurent/Library/V2/libs_srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Sun Apr 30 01:36:21 2017 Tiphaine LAURENT
** Last update Sun Apr 30 02:16:36 2017 Tiphaine LAURENT
*/

#include "my.h"

char		*my_strstr(char *str, const char *to_find)
{
  size_t	len_str;

  if (str == NULL || to_find == NULL)
    return (NULL);
  len_str = 0;
  while (str[len_str] != '\0')
    {
      if (my_strcmp(&str[len_str], to_find))
	return (my_strdup(&str[len_str]));
      len_str += 1;
    }
  return (NULL);
}
