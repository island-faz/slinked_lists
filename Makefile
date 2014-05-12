##
## Makefile for lib in /home/bourhi_a/rendu/PSU_2013_minitalk/lib
## 
## Made by amine bourhime
## Login   <bourhi_a@epitech.net>
## 
## Started on  Tue Mar 18 18:24:20 2014 
## Last update Mon May 12 17:56:29 2014 
##

NAME		=	liblist.a

SRC		= 	src/push_back.c \
			src/push_front.c \
			src/in_list.c \
			src/last_node.c \
			src/rm_elem.c \
			src/list_len.c \
			src/rm_first.c \
			src/rm_last.c \
			src/get_rev.c \
			src/sort_list.c \

OBJ		=	$(SRC:.c=.o)

CC		=	cc -g

RM		=	rm -f

BCP		=	*~

CFLAGS		=	-I./include

all		:	$(NAME)

$(NAME)		:	$(OBJ)
			ar -r $(NAME) $(OBJ)
			ranlib $(NAME)

clean		:
			$(RM) $(OBJ) lib/$(BCP) include/$(BCP) $(BCP)

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all
