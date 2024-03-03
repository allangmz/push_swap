/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_verif_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aguemazi <aguemazi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 14:26:13 by aguemazi          #+#    #+#             */
/*   Updated: 2022/05/30 20:32:50 by aguemazi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_verif_size_int(const int argc, const char **argv)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			k = 0;
			if (argv[i][j + k] && argv[i][j + k] == ' ' )
				j++;
			while (argv[i][j + k] && argv[i][j + k] != ' ' )
				k++;
			if (k > 10
				|| (k == 10 && ft_strncmp("2147483647", &argv[i][j], 10) < 0))
				return (0);
			j += k;
		}
		i++;
	}
	return (1);
}

int	ft_verif_list(const int argc, const char **argv)
{
	int	i;
	int	k;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == ' ')
			return (0);
		k = 0;
		while (argv[i][k])
		{
			if (!(argv[i][k] == '-' && ft_isdigit(argv[i][k + 1]))
			&& !(argv[i][k] == ' ' && (ft_isdigit(argv[i][k + 1])
			|| (argv[i][k + 1] == '-')))
			&& !ft_isdigit(argv[i][k]))
				return (0);
			k++;
		}
		i++;
	}
	return (1);
}

int	ft_verif_doublon_stack(t_item	*first, int *nb_value)
{
	t_item	*temp1;
	t_item	*temp2;

	*nb_value = 0;
	temp1 = first;
	while (temp1)
	{
		temp2 = temp1->next;
		while (temp2)
		{
			if (temp2->value == temp1->value)
				return (0);
			temp2 = temp2->next;
		}
		temp1 = temp1->next;
		*nb_value += 1;
	}
	return (1);
}
