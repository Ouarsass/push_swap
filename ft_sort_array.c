/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_array.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:02:31 by mbjaghou          #+#    #+#             */
/*   Updated: 2022/05/21 17:25:57 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_save_list(t_num *stack_a)
{
	int	i;
	int	*stored_list;

	i = 0;
	stored_list = malloc(sizeof(int) * stack_a->size);
	if (!stored_list)
		exit (1);
	while (i < stack_a->size)
	{
		stored_list[i] = stack_a->arry[i];
		i++;
	}
	return (stored_list);
}

void	ft_swap(int *left, int *right)
{
	int	tmp;

	tmp = *left;
	*left = *right;
	*right = tmp;
}

int	*ft_sort_array(t_num *stack_a)
{
	int	i;
	int	j;
	int	smallest_index;
	int	*sorted_list;

	i = 0;
	sorted_list = ft_save_list(stack_a);
	while (i < stack_a->size - 1)
	{
		smallest_index = i;
		j = i + 1;
		while (j < stack_a->size)
		{
			if (sorted_list[j] < sorted_list[smallest_index])
				smallest_index = j;
			j++;
		}
		ft_swap(&sorted_list[smallest_index], &sorted_list[i]);
		i++;
	}
	return (sorted_list);
}
