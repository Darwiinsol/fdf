#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apissier <apissier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/01/26 15:15:54 by apissier          #+#    #+#              #
#    Updated: 2017/01/26 15:23:03 by apissier         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = fdf

FLAGS = -Wall -Wextra -Werror

CC = gcc

SRC = $(SRCDIR)test.c 

OBJ = $(SRC:.c=.o)

LIBFT = ./libft/libft.a
LIBINC = -I./libft
LIBLINK = -L./libft -lft

SRCDIR = ./src/
INCDIR = ./includes/

all: $(NAME)

$(NAME):
		make -C ./libft/
		$(CC) $(FLAGS) $(SRC) $(LIBFT) -o $(NAME) $(SRCDIR)test.c

clean:
		rm -rf $(OBJ)
		make -C ./libft clean

fclean: clean
		rm -f $(NAME)
		make -C ./libft fclean

re: fclean all