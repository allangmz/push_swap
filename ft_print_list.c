/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 14:58:42 by aguemazi          #+#    #+#             */
/*   Updated: 2022/04/26 16:35:59 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void	ft_print_list(t_item *first)
{
	int		i;
	t_item	*temp;

	temp = first;
	i = 0;
	if (!temp)
	{
		ft_printf("┏━━━━━━━━━┓\n");
		ft_printf("┃━━Empty━━┃\n");
		ft_printf("┗━━━━━━━━━┛\n");
		return ;
	}
	ft_printf("┏━━━━━━━━━┓\n");
	while (temp != NULL)
	{
		printf("┃━ %d : %d ━┃	%d\n", i, temp->value, temp->simpl_value);
		temp = temp->next;
		i++;
	}
	ft_printf("┗━━━━━━━━━┛\n");
}
