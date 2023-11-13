# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 11:41:06 by aschenk           #+#    #+#              #
#    Updated: 2023/11/13 12:37:41 by aschenk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

SRCS =	./src/ft_atoi.c \
		./src/ft_strlen.c \
		./src/ft_putchar_fd.c \

OBJS = ${SRCS:.c=.o}

.c.o: $(HEADER)
		cc $(CFLAGS) -c $< -o ${<:.c=.o}

$(NAME) : $(OBJS)
		cc $(OBJS) -o $(NAME)

all: $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all
