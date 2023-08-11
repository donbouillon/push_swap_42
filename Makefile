# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slistle <slistle@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/11 12:20:15 by slistle           #+#    #+#              #
#    Updated: 2023/08/11 12:22:21 by slistle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
CC := gcc
CFLAGS := -Wall -Werror -Wextra
SRC_FILES := main.c ft_printf/ft_printf.c ft_printf/ft_printf_utils.c
OBJ_FILES = $(SRC_FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	make re -C ./libft
	$(CC) ${OBJ_FILES} -Llibft -lft -o ${NAME}

.c.o:
	${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

clean:
	rm -rf $(OBJ_FILES) $(NAME)

fclean: clean
	rm -rf all
	make fclean -C ./libft

re: fclean all