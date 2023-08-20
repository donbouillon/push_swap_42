NAME := liblibft/ft.a
CC := gcc
CFLAGS := -Wall -Werror -Wextra
SRC_FILES := libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_isalnum.c libft/ft_isascii.c libft/ft_isprint.c libft/ft_strlen.c \
             libft/ft_memset.c libft/ft_bzero.c libft/ft_memcpy.c libft/ft_memmove.c libft/ft_strlcpy.c libft/ft_strlcat.c libft/ft_toupper.c \
             libft/ft_tolower.c libft/ft_strchr.c libft/ft_strncmp.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_strnstr.c libft/ft_atoi.c \
             libft/ft_calloc.c libft/ft_strdup.c libft/ft_strrchr.c libft/ft_substr.c libft/ft_strtrim.c libft/ft_split.c \
             libft/ft_itoa.c libft/ft_strmapi.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_strjoin.c libft/ft_putnbr_fd.c

BONUS_SRC_FILES := libft/ft_lstnew.c libft/ft_lstadd_front.c libft/ft_lstsize.c libft/ft_lstlast.c libft/ft_lstadd_back.c libft/ft_lstdelone.c \
                   libft/ft_lstclear.c libft/ft_lstiter.c libft/ft_striteri.c

OBJ_FILES = $(SRC_FILES:.c=.o)
BONUS_OBJ_FILES = $(BONUS_SRC_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)

bonus: $(BONUS_OBJ_FILES)
	ar rcs $(NAME) $(BONUS_OBJ_FILES)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ_FILES) $(BONUS_OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

# NAME := liblibft/ft.a
# CC := cc
# CFLAGS := -Wall -Werror -Wextra
# SRC_FILES := libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_isalnum.c libft/ft_isascii.c libft/ft_isprint.c libft/ft_strlen.c \
#  	libft/ft_memset.c libft/ft_bzero.c libft/ft_memcpy.c libft/ft_memmove.c libft/ft_strlcpy.c libft/ft_strlcat.c libft/ft_toupper.c\
#  	libft/ft_tolower.c libft/ft_strchr.c libft/ft_strncmp.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_strnstr.c libft/ft_atoi.c\
# 	libft/ft_calloc.c libft/ft_strdup.c libft/ft_strrchr.c libft/ft_substr.c libft/ft_strtrim.c libft/ft_split.c\
# 	libft/ft_itoa.c libft/ft_strmapi.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_strjoin.c  libft/ft_putnbr_fd.c\
	

# BONUS_SRC_FILES := libft/ft_lstnew.c libft/ft_lstadd_front.c libft/ft_lstsize.c libft/ft_lstlast.c libft/ft_lstadd_back.c libft/ft_lstdelone.c\
# 	libft/ft_lstclear.c libft/ft_lstiter.c libft/ft_striteri.c

# BONUS_OBJ_FILES = $(BONUS_SRC_FILES:.c=.o)
	
# OBJ_FILES = $(SRC_FILES:.c=.o)

# all : $(NAME) bonus

# $(NAME) : $(OBJ_FILES)
# 	ar rcs $(NAME) $(OBJ_FILES)

# bonus : $(BONUS_OBJ_FILES)
# 	ar rcs $(NAME) $(BONUS_OBJ_FILES)

# # so:
# # 	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRC_FILES) $(BONUS_SRC_FILES)
# # 	gcc -nostartfiles -shared -o liblibft/ft.so $(OBJ_FILES) $(BONUS_OBJ_FILES) 

# .c.o:
# 	${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

# clean:
# 	rm -rf $(OBJ_FILES) $(BONUS_OBJ_FILES) $(NAME) liblibft/ft.so

# fclean: clean
# 	rm -rf all

# re: fclean all
