/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange_rest.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:06:08 by mbjaghou          #+#    #+#             */
/*   Updated: 2022/05/23 19:21:26 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_arrange_rest_of_numbers(t_stack *stacks, int size)
{
	if (!ft_check_sorted(stacks->stack_a))
	{
		while (stacks->stack_a.sizeadd >= 5)
		{
			index_ten_numbers(stacks);
			ft_pb(stacks, OK);
		}
		sort_five_nembers(stacks);
		while (stacks->stack_a.sizeadd != size)
			ft_pa(stacks, OK);
	}
}

void	ft_arrange_rest(t_stack *stacks)
{
	if (stacks->stack_a.sizeadd == 2)
	{
		if (!ft_check_sorted(stacks->stack_a))
			sa_or_sb(&stacks->stack_a, OK, 'a');
	}
	if (stacks->stack_a.sizeadd == 3)
		sort_tree_nembers(&stacks->stack_a);
	if (stacks->stack_a.sizeadd == 5 || stacks->stack_a.sizeadd == 4)
		sort_five_nembers(stacks);
	if (stacks->stack_a.sizeadd > 5)
		ft_arrange_rest_of_numbers(stacks, stacks->stack_a.sizeadd);
}
