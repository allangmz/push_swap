/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 09:15:12 by aguemazi          #+#    #+#             */
/*   Updated: 2022/05/30 17:26:07 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include "Libft/libft.h" 

typedef struct s_item
{
	int				value;
	int				simpl_value;
	struct s_item	*next;
}	t_item;

void	sa(t_item **a);
void	pa(t_item **a, t_item **b);
void	pb(t_item **b, t_item **a);
void	ra(t_item **a);
void	rra(t_item **a);
void	ft_lstadd_front(t_item **stack, t_item **new);
int		ft_verif_size_int(const int argc, const char **argv);
void	ft_print_list(t_item *first);
t_item	*ft_sort_item(t_item *b, t_item *a, int argc, int max_value);
int		ft_verif_list(const int argc, const char **argv);
t_item	*ft_item_new(t_item *stack, int value);
t_item	*ft_insert_nbr(int argc, const char **argv, t_item	*a);
int		ft_verif_doublon_stack(t_item	*first, int *nb_value);
int		ft_stack_max(t_item *a);
t_item	*ft_simply_nbr(t_item	*a);
t_item	*ft_find_min(t_item *a);
void	ft_push_min(t_item **a, t_item **b, int nb_value);
t_item	*ft_sort_little_stack(t_item **a, t_item **b, int nb_value);
void	ft_clear_list(t_item *stack);
int		ft_is_sort(t_item *a);
int		ft_is_reverse_sort(t_item *a);

#endif
