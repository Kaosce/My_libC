##
## Makefile for Makefile in /home/TiphaineLaurent/Library/V2
## 
## Made by Tiphaine LAURENT
## Login   <TiphaineLaurent@epitech.net>
## 
## Started on  Wed Apr 26 00:50:19 2017 Tiphaine LAURENT
## Last update Wed May  3 17:04:29 2017 Tiphaine LAURENT
##

CC		=	gcc
CFLAGS		+=	-W -Wall
CFLAGS		+=	-ansi -pedantic
CFLAGS		+=	-I ./includes
CFLAGS		+=	-g3

LDFLAGS		+=	-l my -L ./libs_srcs/my
LDFLAGS		+=	-l printf -L ./libs_srcs/printf

RM		=	rm -f

NAME		=	test

SRCS_DIR	=	./
SRCS		=	main.c

OBJS		=	$(foreach SRCS, $(SRCS), $(SRCS_DIR)$(SRCS:.c=.o))


all:		libs_make $(NAME)

libs_make:
		@echo -e "\e[0;33mCompiling librairies\e[0;m"
		make -C libs_srcs/my
		@echo -e "\e[0;32m[OK] libmy compiled\e[0;m"
		make -C libs_srcs/printf
		@echo -e "\e[0;32m[OK] libprintf compiled\e[0;m"

$(NAME):	$(OBJS)
		@echo -e "\e[0;33mCompiling $(NAME)\e[0;m"
		$(CC) -o $(NAME) $(OBJS) $(LDFLAGS)
		@echo -e "\e[0;32m[OK] $(NAME) compiled\e[0;m"

create:
		@mkdir srcs includes
		touch srcs/main.c srcs/$(NAME).c includes/$(NAME).h

libs_clean:
		@echo -e "\e[0;33mRemoving OBJS of librairies\e[0;m"
		make clean -C libs_srcs/my
		make clean -C libs_srcs/printf
		@echo -e "\e[0;32m[OK] OBJS of libraires removed\e[0;m"

clean:		libs_clean
		@echo -e "\e[0;33mRemoving OBJS\e[0;m"
		$(RM) $(OBJS)
		@echo -e "\e[0;32m[OK] OBJS removed\e[0;m"

libs_fclean:
		@echo -e "\e[0;33mRemoving librairies\e[0;m"
		make fclean -C libs_srcs/my
		make fclean -C libs_srcs/printf
		@echo -e "\e[0;32m[OK] Libraires removed\e[0;m"

fclean:		libs_fclean clean
		@echo -e "\e[0;33mRemoving $(NAME)\e[0;m"
		$(RM) $(NAME)
		@echo -e "\e[0;32m[OK] $(NAME) removed\e[0;m"

re:		fclean all

.PHONY:		all clean fclean re

##Ce Makefile doit recompiler toutes les libraires
