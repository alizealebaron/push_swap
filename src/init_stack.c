/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 12:47:48 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/19 15:38:33 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_stack	*make_a_stack(int argc, char **argv)
{
	int			counter;
	char		**tmp_argv;
	int			tmp_nbr;
	t_stack		*ret_stack;

	counter = 0;
	if (argc == 2)
		tmp_argv = ft_split(argv[1], ' ');
	else
		tmp_argv = argv + 1;
	while (tmp_argv[counter])
	{
		tmp_nbr = ft_atoi(tmp_argv[counter]);
		if (counter == 0)
			ret_stack = stack_new(tmp_nbr);
		else
			stack_add_back(&ret_stack, stack_new(tmp_nbr));
		counter++;
	}
	if (argc == 2)
		tmp_argv = free_table_string(tmp_argv);
	return (ret_stack);
}

void	init_index(t_stack *stack, int size)
{
	t_stack	*big_one;
	t_stack	*tmp;

	while (size--)
	{
		big_one = NULL;
		tmp = stack;
		while (tmp)
		{
			if (!tmp->index && (big_one == NULL
					|| tmp->value > big_one->value))
				big_one = tmp;
			tmp = tmp->next;
		}
		if (big_one)
			big_one->index = size;
	}
}
