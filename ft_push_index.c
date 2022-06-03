/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_index.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:05:09 by mbjaghou          #+#    #+#             */
/*   Updated: 2022/05/29 18:10:43 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_move_to_top(t_stack *stacks, int index)
{
	int	divid;

	divid = stacks->stack_a.sizeadd / 2;
	while (index != 0)
	{
		if (index <= divid)
		{
			ft_ra(&stacks->stack_a, OK);
			index--;
		}
		else
		{
			ft_rra(&stacks->stack_a, OK);
			index++;
			if (index == stacks->stack_a.sizeadd)
				break ;
		}
	}
}

int	ft_search_index(t_stack *stacks, int key_number)
{
	int	i;

	i = 0;
	while (i < stacks->stack_a.sizeadd)
	{
		if (stacks->stack_a.arry[i] <= key_number)
			return (i);
		i++;
	}
	return (-1);
}

void	ft_push_index(t_stack *stacks, int key_number)
{
	int	index;

	index = ft_search_index(stacks, key_number);
	while (index != -1)
	{
		ft_move_to_top(stacks, index);
		ft_pb(stacks, OK);
		index = ft_search_index(stacks, key_number);
	}
}
