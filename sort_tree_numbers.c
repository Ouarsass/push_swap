/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tree_numbers.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 16:53:32 by mbjaghou          #+#    #+#             */
/*   Updated: 2022/05/23 19:22:17 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_tree_nembers(t_num *stack)
{
	if (stack->arry[0] > stack->arry[1])
		sa_or_sb(stack, OK, 'a');
	if (!ft_check_sorted(*stack))
		ft_rra(stack, OK);
	if (stack->arry[0] > stack->arry[1])
		sa_or_sb(stack, OK, 'a');
}
