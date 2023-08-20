# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: slistle <slistle@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/11 12:20:15 by slistle           #+#    #+#              #
#    Updated: 2023/08/20 12:34:48 by slistle          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := push_swap
CC := gcc
CFLAGS := -Wall -Werror -Wextra
SRC_FILES := main.c ft_printf/ft_printf.c ft_printf/ft_printf_utils.c libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_isalnum.c libft/ft_isascii.c libft/ft_isprint.c libft/ft_strlen.c \
             libft/ft_memset.c libft/ft_bzero.c libft/ft_memcpy.c libft/ft_memmove.c libft/ft_strlcpy.c libft/ft_strlcat.c libft/ft_toupper.c \
             libft/ft_tolower.c libft/ft_strchr.c libft/ft_strncmp.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_strnstr.c libft/ft_atoi.c \
             libft/ft_calloc.c libft/ft_strdup.c libft/ft_strrchr.c libft/ft_substr.c libft/ft_strtrim.c libft/ft_split.c \
             libft/ft_itoa.c libft/ft_strmapi.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_strjoin.c libft/ft_putnbr_fd.c \
			 libft/ft_lstnew.c libft/ft_lstadd_front.c libft/ft_lstsize.c libft/ft_lstlast.c libft/ft_lstadd_back.c libft/ft_lstdelone.c \
             libft/ft_lstclear.c libft/ft_lstiter.c libft/ft_striteri.c operations.c lst_utils.c index.c frees.c errors.c sorting.c push_swap_utils.c \
			 operationc_2.c simple_sort.c double_operations.c

OBJ_FILES = $(SRC_FILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	$(CC) ${OBJ_FILES} -o ${NAME}
	
.c.o:
	${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

clean:
	rm -rf $(OBJ_FILES) $(NAME)

fclean: clean
	rm -rf all

re: fclean all