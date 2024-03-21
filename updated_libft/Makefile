# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aschenk <aschenk@student.42berlin.de>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/13 11:41:06 by aschenk           #+#    #+#              #
#    Updated: 2024/03/21 15:21:43 by aschenk          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		../../obj/libft/libft.a
CC =		cc
CFLAGS =	-Wall -Wextra -Werror

# Macros
## FOR GET_NEXT_LINE()
BUFFER_SIZE ?= 42
FD_SIZE ?= 1024

SRCS =			ft_isalpha.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_toupper.c \
				ft_tolower.c \
				ft_strncmp.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_strchr.c \
				ft_strrchr.c \
				ft_strnstr.c \
				ft_memset.c \
				ft_memchr.c \
				ft_memcpy.c \
				ft_memcmp.c \
				ft_memmove.c \
				ft_bzero.c \
				ft_atoi.c \
				ft_strdup.c \
				ft_calloc.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strtrim.c \
				ft_split.c \
				ft_itoa.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_lstnew.c \
				ft_lstadd_front.c \
				ft_lstsize.c \
				ft_lstlast.c \
				ft_lstadd_back.c \
				ft_lstdelone.c \
				ft_lstclear.c \
				ft_lstiter.c \
				ft_lstmap.c \
				ft_strcmp.c \
				ft_isbinary.c \
				get_next_line_bonus.c \
				ft_printf_utils.c \
				ft_printf.c
OBJS :=		$(SRCS:%.c=../../obj/libft/%.o)
HDRS := 	libft.h

# Define the total number of sorce files.
TOTAL_SRCS := $(words $(SRCS))
SRC_NUM := 0

# Define ANSI escape codes for colors and styles
RESET = \033[0m
BOLD = \033[1m
RED = \033[31;2m
GREEN = \033[32m
YELLOW = \033[33m

# Target 'all' is the default target, building library specified by $(NAME).
all:	$(NAME)

# Rule to compile .c files to .o files with specified macros.
# Prints progress bar.
../../obj/libft/%.o: %.c $(HDRS)
	@mkdir -p $(@D)
	@$(eval SRC_NUM := $(shell expr $(SRC_NUM) + 1))
	@$(eval PERCENT := $(shell printf "%.0f" $(shell echo "scale=4; $(SRC_NUM) / $(TOTAL_SRCS) * 100" | bc)))
	@printf "$(BOLD)\rCompiling libft: ["
	@$(eval PROGRESS := $(shell expr $(PERCENT) / 5))
	@printf "$(GREEN)%0.s#$(RESET)$(BOLD)" $(shell seq 1 $(PROGRESS))
	@if [ $(PERCENT) -lt 100 ]; then printf "%0.s-" $(shell seq 1 $(shell expr 20 - $(PROGRESS))); fi
	@printf "] "
	@if [ $(PERCENT) -eq 100 ]; then printf "$(GREEN)"; fi
	@printf "%d%% $(RESET)" $(PERCENT)
	@$(CC) $(CFLAGS) -D BUFFER_SIZE=$(BUFFER_SIZE) -D FD_SIZE=$(FD_SIZE) -c $< -o $@

# Target $(NAME) depends on object files $(OBJS),
# and the 'ar rc' command creates the library.
$(NAME):	$(OBJS)
	@ar rcs $(NAME) $(OBJS)

# Target 'clean' removes object files.
clean:
	@rm -f $(OBJS)
	@echo "$(BOLD)$(RED)Object files cleaned."

# Target 'fclean' depends on 'clean' and removes the library as well.
fclean:	clean
	@rm -f $(NAME)
	@rm -rf ../../obj/libft
	@echo "$(BOLD)$(RED)Libft library removed.$(RESET)"
	@$(eval SRC_NUM := 0)

# Target 're' depends on 'fclean' and 'all', rebuilding the project from scratch.
re:	fclean all

# Marking rules as 'phony' to ensure that 'make' doesn't misinterpret them as files.
.PHONY: all clean fclean re
