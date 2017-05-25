/*
** printf.h for printf in /home/TiphaineLaurent/Library/V2/includes/
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Thu Apr 27 17:55:15 2017 Tiphaine LAURENT
** Last update Wed May  3 01:11:23 2017 Tiphaine LAURENT
*/

#ifndef PRINTF_H_
# define PRINTF_H_

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdbool.h>

typedef struct	s_char_flag
{
  char		flag;
  int		(*fonc)(va_list args);
}		t_flag;

/*
** Utils
*/
char		*base_printf(size_t nb, int base);

/*
** Flag Functions
*/
int		arg_perc(va_list args);
int		arg_char(va_list args);
int		arg_int(va_list args);
int		arg_unsigned_bin(va_list args);
int		arg_octal(va_list args);
int		arg_string(va_list args);
int		arg_string_octal(va_list args);
int		arg_unsigned_int(va_list args);
int		arg_unsigned_hexa(va_list args);
int		arg_unsigned_hexa_upp(va_list args);
int		arg_pointer(va_list args);
int		arg_boolean(va_list args);

/*
** Principal Functions
*/
int		my_printf(const char *str, ...);

#endif /* !PRINTF_H_ */
