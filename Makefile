# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: pminialg <pminialg@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2023/10/26 16:15:42 by pminialg      #+#    #+#                  #
#    Updated: 2023/11/15 15:02:26 by pminialg      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME=libftprintf.a

CFLAGS=-Wall -Wextra -Werror

RM=rm -f

SRC= ft_printf.c ft_putnbr_base_number.c ft_check_unsigned.c ft_find_base.c ft_pointer.c \
ft_putnbr_base.c ft_putstr.c ft_check_number.c

LIBFT_DIR= ./libft
LIBFT= $(LIBFT_DIR)/libft.a

OBJ=$(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	cc $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ) $(LIBFT)
	cp $(LIBFT) $(NAME)
	@ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR) all

clean:
	make -C $(LIBFT_DIR) clean
	$(RM) $(OBJ)

fclean: clean
	make -C $(LIBFT_DIR) fclean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
