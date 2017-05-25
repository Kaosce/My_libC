/*
** arg_string_octal.c for arg_string_octal in /home/TiphaineLaurent/Library/V2/libs_srcs/printf
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue May  2 22:57:20 2017 Tiphaine LAURENT
** Last update Wed May  3 00:40:50 2017 Tiphaine LAURENT
*/

#include "printf.h"

static size_t	my_strlen(const char *str)
{
  size_t	len;

  if (str == NULL)
    return (0);
  len = 0;
  while (str[len] != '\0')
    len += 1;
  return (len);
}

static int	my_putstr(const char *str)
{
  size_t	len;

  if (str == NULL)
    return (-1);
  len = my_strlen(str);
  if (write(1, str, len) == -1)
    return (-1);
  return (len);
}

static int	my_putchar(char c)
{
  if (write(1, &c, 1) == -1)
    return (-1);
  return (1);
}

int		arg_string_octal(va_list args)
{
  size_t	len;
  int		written;
  char		*str;
  char		*nb_octal;

  str = va_arg(args, char *);
  len = 0;
  written = 0;
  while (str[len] != '\0')
    {
      if (str[len] < 32 || str[len] > 126)
	{
	  nb_octal = base_printf(str[len], 8);
	  written += my_putchar('\\');
	  if (my_strlen(nb_octal) < 3)
	    written += my_putchar('0');
	  written += my_putstr(nb_octal);
	  free(nb_octal);
	}
      else
	written += my_putchar(str[len]);
      len += 1;
    }
  return (written);
}
