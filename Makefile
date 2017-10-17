#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aho <aho@student.42.us.org>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/24 22:54:14 by aho               #+#    #+#              #
#    Updated: 2017/10/16 02:13:07 by aho              ###   ########.fr        #
#                                                                              #
#******************************************************************************#

EXEC = libft
NAME = libft.a
SRC = *.c
OBJ = *.o 
INCLUDES = libft.h
GCC = gcc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

$(OBJ): $(SRC)
	$(GCC) -c $(FLAGS) $(SRC)

clean: 
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(OBJ) $(NAME) *.c~ Makefile~ *.h~ *.c#~ author~ *.c#

re: fclean all