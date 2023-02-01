# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/01 13:17:13 by lbaroni           #+#    #+#              #
#    Updated: 2023/02/01 13:17:15 by lbaroni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER = server.c

CLIENT = client.c

GCC = cc

FLAGS = -Wall -Werror -Wextra -g

NAME =  minitalk

NAME_SERVER = server

NAME_CLIENT = client

SRC_SERVER = $(SERVER)

SRC_CLIENT = $(CLIENT)

OBJ_SERVER = $(SRC_SERVER:.c=.o)

OBJ_CLIENT = $(SRC_CLIENT:.c=.o)

GREEN = \033[0;32m
YELLOW = \033[0;33m
PURPLE = \033[0;35m
NO_COLOR = \033[0m

all: $(NAME)

%.o: %.c
	$(GCC) $(FLAGS) $< -o $@ -I ft_printf/ft_printf.h ft_printf/libftprintf.a

$(NAME):  server client

server: make $(OBJ_SERVER)
	$(GCC) $(FLAGS) $(SRC_SERVER) -o $(NAME_SERVER)  ft_printf/libftprintf.a
	@echo "$(GREEN)server compilato con successo $(NO_COLOR)"
	
client: make $(OBJ_CLIENT)
	$(GCC) $(FLAGS) $(SRC_CLIENT) -o $(NAME_CLIENT) ft_printf/libftprintf.a
	@echo "$(GREEN)client compilato con successo $(NO_COLOR)"
clean:
	rm -rf $(OBJ_CLIENT) $(OBJ_SERVER)
	make -C ft_printf clean
	@echo "$(PURPLE)objs rimossi!\n $(NO_COLOR)"

fclean: clean
	rm -rf $(NAME_SERVER) $(NAME_CLIENT)
	make -C ft_printf fclean
	@echo "$(PURPLE)client e server rimossi!\n $(NO_COLOR)"
make:
	make -C ft_printf

re: fclean all

