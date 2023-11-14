# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 11:41:06 by aschenk           #+#    #+#              #
#    Updated: 2023/11/14 16:03:45 by aschenk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS =	src/ft_toupper.c \
		src/ft_tolower.c \
		src/ft_strlen.c \
		src/ft_strncmp.c \
		# ft_isalpha.c \
		# ft_isdigit.c \
		# ft_isalnum.c \
		# ft_isascii.c \
		# ft_isprint.c \
		# ft_strchr.c \
		# ft_strrchr.c \
		# ft_memset.c \
		# ft_bzero.c \
		# ft_memchr.c \
		# ft_memcpy.c \
		# ft_memcmp.c \
		# ft_memmove.c \
		# ft_strnstr.c \
		# ft_strlcpy.c \
		# ft_strlcat.c \
		# ft_atoi.c \
		# ft_calloc.c \
		# ft_strdup.c \
		# ft_substr.c \
		# ft_strjoin.c \
		# ft_strtrim.c \
		# ft_split.c \
		# ft_itoa.c \
		# ft_strmapi.c \
		# ft_striteri.c \
		# ft_putchar_fd.c \
		# ft_putstr_fd.c \
		# ft_putendl_fd.c \
		# ft_putnbr_fd.c \
		# ft_lstnew.c \
		# ft_lstadd_front.c \
		# ft_lstsize.c \
		# ft_lstlast.c \
		# ft_lstadd_back.c \
		# ft_lstdelone.c \
		# ft_lstclear.c \
		# ft_lstiter.c \
		# ft_lstmap.c \

OBJS = ${SRCS:.c=.o}

.c.o:
	cc $(CFLAGS) -c $< -o $@

$(NAME) : $(OBJS)
		ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all
