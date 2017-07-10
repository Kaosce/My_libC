##
## Makefile for Makefile in /home/TiphaineLaurent/Library/V2
## 
## Made by Tiphaine LAURENT
## Login   <TiphaineLaurent@epitech.net>
## 
## Started on  Tue Apr 25 15:14:05 2017 Tiphaine LAURENT
## Last update Mon Jul 10 15:39:55 2017 Tiphaine
##

CC		=	gcc

CFLAGS		+=	-W -Wall -Wextra
CFLAGS		+=	-ansi -pedantic
CFLAGS		+=	-I ../../includes

SRCS_DIR	=	display			\
			maths			\
			str

DISPLAY_SRCS	=	my_putchar.c

SRCS		=	my_isdigit.c		\
			my_putchar.c		\
			my_put_wordtab.c	\
			my_strcmp.c		\
			my_strncmp.c		\
			my_epure_str.c		\
			my_isneg.c		\
			my_puterror.c		\
			my_revstr.c		\
			my_strcpy.c		\
			my_strncpy.c		\
			my_getnb.c		\
			my_isprime.c		\
			my_putnb.c		\
			my_sqrt.c		\
			my_str_isdigit.c	\
			my_swap.c		\
			my_isalpha.c		\
			my_pow.c		\
			my_putstr.c		\
			my_strcat.c		\
			my_strlen.c		\
			my_tablen.c		\
			my_strchr.c		\
			my_min.c		\
			my_max.c		\
			my_strdup.c		\
			my_abs.c		\
			my_strstr.c		\
			my_memcpy.c		\
			my_realloc.c		\
			my_str_to_wordtab.c	\
			get_next_line.c		\
			my_strcatdup.c		\
			my_strrchr.c		\
			my_strchrnul.c		\
			my_strcasecmp.c		\
			my_strncasecmp.c	\
			my_strcspn.c		\
			my_strfry.c		\
			my_strpbrk.c		\
			my_strndup.c

OBJS		=	$(SRCS:.c=.o)

NAME		=	libmy.a

RM		=	rm -f


all:		$(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
