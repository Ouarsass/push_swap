/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_or_sb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 14:11:20 by mbjaghou          #+#    #+#             */
/*   Updated: 2022/05/25 23:39:35 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa_or_sb(t_num *array, int type, char c)
{
	int	tmp;

	if (type != 0 && c == 'a')
		write(1, "sa\n", 3);
	else if (type != 0 && c == 'b')
		write (1, "sb\n", 3);
	if (array->sizeadd > 1)
	{
		tmp = array->arry[0];
		array->arry[0] = array->arry[1];
		array->arry[1] = tmp;
	}
}

void	ft_sa_and_sb(t_stack *stack, int type)
{
	if (type)
		write(1, "ss\n", 3);
	sa_or_sb(&stack->stack_a, KO, 'a');
	sa_or_sb(&stack->stack_b, KO, 'b');
}
