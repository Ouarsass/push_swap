/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouarsas <mouarsas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 19:14:42 by mbjaghou          #+#    #+#             */
/*   Updated: 2022/05/24 22:37:40 by mouarsas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
	}
	if (s1[i] != s2[i])
		return (s1[i] - s2[i]);
	return (0);
}

void	ft_check(char *line, t_stack *stacks)
{
	if (!ft_strcmp(line, "sa\n"))
		sa_or_sb(&stacks->stack_a, OK, 'a');
	else if (!ft_strcmp(line, "sb\n"))
		sa_or_sb(&stacks->stack_b, OK, 'b');
	else if (!ft_strcmp(line, "ss\n"))
		ft_sa_and_sb(stacks, OK);
	else if (!ft_strcmp(line, "rra\n"))
		ft_rra(&stacks->stack_a, OK);
	else if (!ft_strcmp(line, "rrb\n"))
		ft_rrb(&stacks->stack_b, OK);
	else if (!ft_strcmp(line, "rrr\n"))
		rra_and_rrb(stacks, OK);
	else if (!ft_strcmp(line, "ra\n"))
		ft_ra(&stacks->stack_a, OK);
	else if (!ft_strcmp(line, "rb\n"))
		ft_rb(&stacks->stack_b, OK);
	else if (!ft_strcmp(line, "rr\n"))
		ft_ra_and_rb(stacks, OK);
	else if (!ft_strcmp(line, "pa\n"))
		ft_pa(stacks, OK);
	else if (!ft_strcmp(line, "pb\n"))
		ft_pb(stacks, OK);
	else
		exit(ft_error_free(stacks, "Error", 0));
}

int	main(int ac, char **av)
{
	char		*line;
	t_stack		stacks;
	char		*string;

	ac--;
	if (ac == 0)
		return (0);
	string = arg_to_string(av);
	stacks = creat_stack(string);
	line = get_next_line(0);
	while (line && line[0] != '\n')
	{	
		ft_check(line, &stacks);
		free(line);
		line = get_next_line(0);
	}
	free(line);
	if (ft_check_sorted(stacks.stack_a) && !stacks.stack_b.sizeadd)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (ft_error_free(&stacks, NULL, 0));
}
