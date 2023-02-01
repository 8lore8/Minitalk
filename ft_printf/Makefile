# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbaroni <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 15:26:06 by lbaroni           #+#    #+#              #
#    Updated: 2022/10/26 17:54:33 by lbaroni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = ft_countdec.c ft_print_hex1.c  ft_print_pointer.c ft_putchar_fd.c\
ft_counthex.c ft_print_hex.c ft_print_str.c ft_putnbr_fd.c\
ft_printchar.c ft_print_int.c ft_print_unsigned_int.c ft_putstr_fd.c\
ft_printf.c ft_ft.c ft_put_unsigned_nbr_fd.c ft_count_unsigned_dec.c

OBJS = ${SRCS:.c=.o}

AR = ar rcs

CC = gcc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

.c.o:
		${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): ${OBJS}
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	$(AR) $(NAME) $(OBJS)
		
all:    ${NAME}

clean:	
	$(MAKE) clean -C ./libft
	${RM} ${OBJS}

fclean: clean
	$(MAKE) fclean -C ./libft
	rm -f $(NAME)

re:             fclean all

.PHONY: all clean fclean re
