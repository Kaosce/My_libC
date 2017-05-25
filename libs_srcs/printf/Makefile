##
## Makefile for Makefile in /home/TiphaineLaurent/Library/V2/libs_srcs/printf
## 
## Made by Tiphaine LAURENT
## Login   <TiphaineLaurent@epitech.net>
## 
## Started on  Thu Apr 27 17:44:51 2017 Tiphaine LAURENT
## Last update Wed May  3 16:36:34 2017 Tiphaine LAURENT
##

CC		=	gcc

CFLAGS		+=	-W -Wall -Wextra
CFLAGS		+=	-ansi -pedantic
CFLAGS		+=	-I ../../includes

SRCS		=	my_printf.c		\
			base_printf.c		\
			arg_perc.c		\
			arg_char.c		\
			arg_int.c		\
			arg_unsigned_bin.c	\
			arg_octal.c		\
			arg_string.c		\
			arg_string_octal.c	\
			arg_unsigned_int.c	\
			arg_unsigned_hexa.c	\
			arg_unsigned_hexa_upp.c	\
			arg_pointer.c		\
			arg_boolean.c

OBJS		=	$(SRCS:.c=.o)

NAME		=	libprintf.a

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
