##
## Makefile for test list in /home/bourhi_a/stork/xbrain/lab/slinked_lists/tests
## 
## Made by amine bourhime
## Login   <bourhi_a@epitech.net>
## 
## Started on  Tue May 13 13:13:57 2014 
## Last update Tue May 13 13:18:37 2014 
##

SRC		= 	main.c \
			misc.c \

OBJ		=	$(SRC:.c=.o)

CC		=	gcc -g -Wall -O3

CFLAGS		=	-I. -I../include

LDFLAGS		=	-llist -L../

RM		=	rm -f

NAME		=	test_list

all		:	$(NAME)

$(NAME)		:	$(OBJ)
			$(CC) $(OBJ) -o $(NAME) $(LDFLAGS)

clean		:
			$(RM) $(OBJ) $(TMP)

fclean		:	clean
			$(RM) $(NAME)

re		:	fclean all
