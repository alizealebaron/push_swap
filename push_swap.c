/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alebaron <alebaron@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 13:22:19 by alebaron          #+#    #+#             */
/*   Updated: 2025/11/22 13:17:00 by alebaron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stacka;
	t_stack	*stackb;

	if (argc < 2)
		return (0);
	check_error(argc, argv);
	stacka = make_a_stack(argc, argv);
	stackb = NULL;
	init_index(stacka, stack_size(stacka));
	sort_stack(&stacka, &stackb);
	stack_clear(&stacka);
	stack_clear(&stackb);
}
