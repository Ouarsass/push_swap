# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mouarsas <mouarsas@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/06 15:29:34 by mbjaghou          #+#    #+#              #
#    Updated: 2022/05/21 17:25:32 by mouarsas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
NAME1 = checker

SRC = 	check_argument.c \
		creat_stack.c \
		push_a_or_b.c \
		push_swap.c \
		reverse_rotate.c \
		rotate.c \
		sa_or_sb.c \
		sort_five_numbers.c \
		sort_ten_nembers.c \
		sort_tree_numbers.c \
		split.c \
		utilis1.c \
		ft_arrange_rest.c\
		ft_find_biggest_number.c\
		ft_find_key_number.c\
		ft_push_index.c\
		ft_sort_array.c\
		ft_arrange_one_handred.c\
		ft_arrange_five_handred.c \
		get_next_line.c\

CHECKRE_SRC =	checker.c\
				get_next_line.c\
				sa_or_sb.c \
				reverse_rotate.c \
				rotate.c \
				push_a_or_b.c \
				check_argument.c \
				creat_stack.c \
				utilis1.c \
				split.c \


OBJ = ${SRC:.c=.o}
OBJ_B = ${CHECKRE_SRC:.c=.o}

CC = cc

CFLAGS = -Wall -Wextra -Werror

all : $(NAME) 

$(NAME): $(OBJ) push_swap.h
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
	@echo "compilation is finished"


bonus : $(OBJ_B)
	@cc  $(CFLAGS) $(OBJ_B) -o $(NAME1)
	@echo "Executable file is ready"

clean :
		@rm -rf $(OBJ) 
		@rm -rf $(OBJ_B)
		@echo "clean .o"

fclean : clean
		@rm -rf $(NAME)
		@rm -rf $(NAME1)
		@echo "clean all"

re : fclean all bonus