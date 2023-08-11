NAME := libft.a
CC := cc
CFLAGS := -Wall -Werror -Wextra
SRC_FILES := ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
 	ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c\
 	ft_tolower.c ft_strchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c\
	ft_calloc.c ft_strdup.c ft_strrchr.c ft_substr.c ft_strtrim.c ft_split.c\
	ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_strjoin.c  ft_putnbr_fd.c\
	

BONUS_SRC_FILES := ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
	ft_lstclear.c ft_lstiter.c ft_striteri.c

BONUS_OBJ_FILES = $(BONUS_SRC_FILES:.c=.o)
	
OBJ_FILES = $(SRC_FILES:.c=.o)

all : $(NAME) bonus

$(NAME) : $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

bonus : $(BONUS_OBJ_FILES)
	ar rcs $(NAME) $(BONUS_OBJ_FILES)

# so:
# 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC_FILES) $(BONUS_SRC_FILES)
# 	gcc -nostartfiles -shared -o libft.so $(OBJ_FILES) $(BONUS_OBJ_FILES) 

.c.o:
	${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

clean:
	rm -rf $(OBJ_FILES) $(BONUS_OBJ_FILES) $(NAME) libft.so

fclean: clean
	rm -rf all

re: fclean all