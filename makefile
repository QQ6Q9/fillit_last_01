# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mkivipur <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/10 14:45:40 by mkivipur          #+#    #+#              #
#    Updated: 2020/01/06 14:28:25 by anikkane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

SRCS = ./fillitfiles/make_tetri.c ./fillitfiles/read.c ./fillitfiles/solve.c ./fillitfiles/make_map.c ./fillitfiles/solve_support.c ./fillitfiles/stock_tetri.c ./fillitfiles/validate.c ./fillitfiles/main.c ./fillitfiles/validate2.c ./fillitfiles/set_nnstring.c
OBJS = ./fillitfiles/*.o

HDR = ./fillitfiles/fillit.h 

LIBFT = libft/

FLAGS = -Wall -Werror -Wextra -W

all: $(NAME)

$(NAME):
	make -C $(LIBFT)
	gcc $(FLAGS) -o $(NAME) $(SRCS) -I $(HDR) -L. libft/libft.a
clean:
	/bin/rm -f $(OBJ)
	make -C $(LIBFT) clean
fclean: clean
	/bin/rm -f $(NAME)
	make -C $(LIBFT) fclean
re: fclean all
