/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arrange_one_handred.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 16:46:08 by mbjaghou          #+#    #+#             */
/*   Updated: 2022/05/21 17:28:44 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_arrange_one_handred(t_stack *stacks)
{
	unsigned int	i;
	int				key_number;
	int				*sorted_list;

	i = 1;
	sorted_list = ft_sort_array(&stacks->stack_a);
	while (i != 4)
	{
		key_number = ft_find_key_number(sorted_list,
				stacks->stack_a.size, i, 4);
		ft_push_index(stacks, key_number);
		i++;
	}
	free (sorted_list);
	ft_arrange_rest(stacks);
	while (stacks->stack_b.sizeadd != 0)
	{
		ft_find_biggest_number(stacks);
		ft_pa(stacks, OK);
	}
}
