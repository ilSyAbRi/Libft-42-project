# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/24 18:35:57 by ilsyabri          #+#    #+#              #
#    Updated: 2025/10/31 19:45:20 by ilsyabri         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



SRC =	ft_atoi.c ft_isalpha.c ft_memchr.c ft_memset.c ft_strlcpy.c ft_strrchr.c \
	ft_bzero.c ft_isascii.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_tolower.c \
	ft_calloc.c ft_isdigit.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_toupper.c \
	ft_isalnum.c ft_isprint.c ft_memmove.c ft_strlcat.c ft_strnstr.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
	ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJ = $(SRC:.c=.o)
NAME = libft.a
CFLAG = -Wall -Wextra -Werror

all : $(NAME) 

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o : %.c
	cc $(CFLAG) -c $< -o $@
clean :
	rm -f $(OBJ)
fclean : clean
	rm -f $(NAME)
re : fclean all

.PHONY: all clean fclean re
