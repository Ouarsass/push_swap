/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 17:35:39 by mbjaghou          #+#    #+#             */
/*   Updated: 2022/05/23 19:21:59 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_get_smallest_index(t_num *stack_a)
{
	int	i ;
	int	s_index;

	i = 0;
	s_index = i;
	while (i < stack_a->sizeadd)
	{
		if (stack_a->arry[s_index] > stack_a->arry[i])
			s_index = i;
		i++;
	}
	return (s_index);
}

void	ft_find_smallest_number(t_stack *stacks)
{
	int	s_index;

	s_index = ft_get_smallest_index(&stacks->stack_a);
	while (s_index != 0)
	{
		if (s_index <= 2)
			ft_ra(&stacks->stack_a, OK);
		else
			ft_rra(&stacks->stack_a, OK);
		s_index = ft_get_smallest_index(&stacks->stack_a);
	}
}

void	sort_five_nembers(t_stack *stacks)
{
	int	i;

	i = 0;
	if (!ft_check_sorted(stacks->stack_a))
	{
		if (stacks->stack_a.sizeadd == 5)
		{
			ft_find_smallest_number(stacks);
			ft_pb(stacks, OK);
			i++;
		}
		if (stacks->stack_a.sizeadd == 4)
		{
			ft_find_smallest_number(stacks);
			ft_pb(stacks, OK);
			i++;
		}
		sort_tree_nembers(&stacks->stack_a);
		while (i > 0)
		{
			ft_pa(stacks, OK);
			i--;
		}
	}
}
