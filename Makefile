# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: edribeir <edribeir@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/11/21 09:47:58 by edribeir      #+#    #+#                  #
#    Updated: 2023/11/21 09:47:59 by edribeir      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

LIBFT = ./Libft/libft.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

AR = ar -rsc

SOURCE = ft_printf.c \
		

OBJECTS = $(SOURCE:%.c=%.o)

all: 
	$(NAME)

$(NAME): $(OBJECTS)
	cp $(Libft) $(NAME)
	$(AR) $(NAME) $(OBJECTS)

$(LIBFT):
	$(MAKE) -C ./Libft

%.o: %.c 
	$(CC) $(CFLAGS) -c -o $@ $^ -I ./Libft
clean: 
	$(MAKE) clean - C ./Libft
	$(RM) $(OBJECTS)

fclean: clean
	$(MAKE) fclean -C ./Libft
	$(RM) $(NAME)
re:
	fclean all

.PHONY: all clean fclean re libft