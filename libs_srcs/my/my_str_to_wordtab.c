/*
** my_str_to_wordtab.c for my_str_to_wordtab in /home/TiphaineLaurent/Library/V2
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue May  2 14:19:51 2017 Tiphaine LAURENT
** Last update Mon May  8 00:43:02 2017 Tiphaine LAURENT
*/

#include "my.h"

static size_t	count_word(const char *str, char limit)
{
  size_t	len;
  size_t	words;

  if (str == NULL)
    return (0);
  len = 0;
  words = 0;
  while (str[len] != '\0')
    {
      if (str[len] == limit)
	words += 1;
      len += 1;
    }
  return (words + 1);
}

static size_t	count_letter(const char *str, char limit)
{
  size_t	len;

  if (str == NULL)
    return (0);
  len = 0;
  while (str[len] != '\0' && str[len] != limit)
    len += 1;
  return (len);
}

static char	*create_word(const char *str, char limit, int nb_word)
{
  static size_t	len = 0;
  size_t	len_word;
  char		*word;

  if (str == NULL)
    return (NULL);
  if ((word = malloc(sizeof(char *) * (count_letter(str, limit) + 1))) == NULL)
    return (NULL);
  if (nb_word == 0)
    len = 0;
  len_word = 0;
  while (str[len] != '\0' && str[len] != limit)
    {
      word[len_word] = str[len];
      len += 1;
      len_word += 1;
    }
  len += 1;
  word[len_word] = '\0';
  return (word);
}

char		**my_str_to_wordtab(const char *str, char limit)
{
  char		**wordtab;
  size_t	len;
  size_t	words;

  if (str == NULL)
    return (NULL);
  if ((wordtab = malloc(sizeof(char **) * (count_word(str, limit) + 1))) == NULL)
    return (NULL);
  len = 0;
  words = 0;
  while (str[len] != '\0')
    {
      if (str[len] == limit || len == 0)
	{
	  wordtab[words] = create_word(str, limit, words);
	  words += 1;
	}
      len += 1;
    }
  wordtab[words] = NULL;
  return (wordtab);
}
