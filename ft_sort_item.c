/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_item.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:41:30 by aguemazi          #+#    #+#             */
/*   Updated: 2022/04/26 15:39:50 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_or_rotate(t_item **a, t_item **b, int num, int i)
{
	if (((num >> i) & 1) == 1)
	{
		write(1, "ra\n", 3);
		ra(a);
	}
	else
	{
		write(1, "pb\n", 3);
		pb(b, a);
	}
}

void	ft_sort(t_item **a, t_item **b, int nb_value, int maxbit)
{
	int	i;
	int	j;
	int	num;

	i = 0;
	while (i <= maxbit)
	{	
		j = 0;
		while (*a && j < nb_value)
		{
			num = (*a)->simpl_value;
			ft_push_or_rotate(a, b, num, i);
			j++;
		}
		while (*b)
		{
			write(1, "pa\n", 3);
			pa(a, b);
		}
		i++;
		if (ft_is_sort(*a))
			return ;
	}
	return ;
}

t_item	*ft_sort_item(t_item *a, t_item *b, int nb_value, int max_value)
{
	int	maxbit;

	if (ft_is_sort(a))
		return (a);
	maxbit = 0;
	if (nb_value > 7)
	{
		while (max_value >> maxbit != 0)
			maxbit ++;
		ft_sort(&a, &b, nb_value, maxbit);
	}
	else
	{
		if (nb_value > 2)
			a = ft_sort_little_stack(&a, &b, nb_value);
		else
		{
			sa(&a);
			ft_printf("sa\n");
		}
	}
	return (a);
}
