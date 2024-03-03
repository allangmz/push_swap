SRC = sa.c pa.c pb.c ra.c rra.c ft_lstadd_front.c ft_print_list.c ft_item_new.c ft_verif_list.c ft_insert_nbr.c ft_stack_max.c ft_simply_nbr.c ft_find_min.c ft_push_min.c ft_sort_little_stack.c ft_sort_item.c ft_clear_list.c ft_is_sort.c ft_is_reverse_sort.c

OBJS = $(SRC:.c=.o)

NAME = push_swap.a

.c.o:
		@ gcc -Wall -Wextra -Werror -c -I./src $< -o ${<:.c=.o}


$(NAME):	$(OBJS)
			$(MAKE) -C Libft/
			cp Libft/libft.a $(NAME)
			ar rcs $@ $^
			gcc -Wall -Wextra -Werror push_swap.c push_swap.a -o push_swap -g

all : ${NAME}

re :		fclean all

clean :
			rm -f ${OBJS}
			$(MAKE) clean -C Libft/

fclean : clean
			$(MAKE) fclean -C Libft/
			rm -f ${OBJS}
			rm -f  ${NAME}

.phony : all flean clean re