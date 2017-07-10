/*
** my.h for my in /home/TiphaineLaurent/Library/V2/srcs/my
** 
** Made by Tiphaine LAURENT
** Login   <TiphaineLaurent@epitech.net>
** 
** Started on  Tue Apr 25 16:11:13 2017 Tiphaine LAURENT
** Last update Mon Jul 10 15:45:43 2017 Tiphaine
*/

#ifndef MY_H_
# define MY_H_

# include <unistd.h>
# include <stdlib.h>

# include <stdint.h>
# include <stdbool.h>

# define EOF	'\0'
# define RETURN	'\n'

typedef enum	e_ret
  {
    END,
    ALLOC,
    OPEN,
    READ,
    WRITE
  }		t_ret;

typedef struct
{
  char		*msg;
  size_t	nb;
}		t_error;

/*
** Displays
*/
int		my_putchar(char c);
int		my_putnb(int nb);
char		*my_strerror(size_t error);
int		my_puterror(const char *str);
size_t		my_strlen(const char *str);
int		my_putstr(const char *str);
size_t		my_tablen(const char **tab);
int		my_put_wordtab(char **wordtab, char delim);

/*
** String Modification
*/
char		*my_strchr(char *str, char c);
char		*my_strrchr(char *str, char c);
char		*my_strchrnul(char *str, char c);
char		*my_epure_str(char *str, char to_epure);
char		*my_revstr(char *str);
char		*my_strcat(char *dest, char *src);
char		*my_strcpy(char *dest, char *src);
char		*my_strncpy(char *src, char *dest, const size_t n);
char		*my_strdup(char *str);
char		*my_strndup(const char *str, size_t n);
char		*my_strcatdup(char *dest, char *src);
char		*my_strstr(char *str, const char *to_find);
char		**my_str_to_wordtab(const char *str, char limit);
size_t		my_strcspn(const char *str, const char *reject);
char		*my_strfry(char *str);
char		*my_strpbrk(const char *str, const char *accept);

/*
** Memory
*/
int		my_swap(const void *a, const void *b);
void		*my_memcpy(void *dest, const void *src, size_t n);
void		*my_realloc(void *ptr, size_t size);

/*
** Tests
*/
bool		my_isalpha(const char c);
bool		my_isdigit(const char c);
bool		my_isneg(const int nb);
bool		my_isprime(int nb);
bool		my_str_isdigit(const char *str);
bool		my_strcmp(const char *str1, const char *str2);
bool		my_strcasecmp(const char *str1, const char *str2);
bool		my_strncmp(const char *str1, const char *str2, size_t n);
bool		my_strncasecmp(const char *str1, const char *str2, size_t n);

/*
** Maths
*/
int		my_getnb(char *str);
double		my_pow(double nb, double power);
double		my_sqrt(double nb);
int		my_min(int a, int b);
int		my_max(int a, int b);
int		my_abs(int nb);

#endif /* !MY_H_ */
