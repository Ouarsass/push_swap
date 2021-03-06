/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:22:37 by mbjaghou          #+#    #+#             */
/*   Updated: 2022/05/21 17:24:37 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_remove_first_elm(int *array, int used_size)
{
	int	i;

	i = 0;
	while (i < used_size)
	{
		array[i] = array[i + 1];
		i++;
	}
}

void	ft_ra(t_num *stack_a, int type)
{
	int	first_elm;

	if (type)
		write(1, "ra\n", 3);
	first_elm = stack_a->arry[0];
	ft_remove_first_elm(stack_a->arry, stack_a->sizeadd);
	stack_a->arry[stack_a->sizeadd - 1] = first_elm;
}

void	ft_rb(t_num *stack_b, int type)
{
	int	first_elm;

	if (type)
		write(1, "rb\n", 3);
	first_elm = stack_b->arry[0];
	ft_remove_first_elm(stack_b->arry, stack_b->sizeadd);
	stack_b->arry[stack_b->sizeadd - 1] = first_elm;
}

void	ft_ra_and_rb(t_stack *stacks, int type)
{
	if (type)
		write(1, "rr\n", 3);
	ft_ra(&stacks->stack_a, KO);
	ft_rb(&stacks->stack_b, KO);
}
