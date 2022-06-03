/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:14:09 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/03 14:52:55 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	a = NULL;
	b = NULL;
	init_stack(&a, argc, argv);
	print_stacks(&a, &b);
	pb(&a, &b);
	print_stacks(&a, &b);
	pb(&a, &b);
	print_stacks(&a, &b);
	pa(&a, &b);
	print_stacks(&a, &b);
	pa(&a, &b);
	print_stacks(&a, &b);
	pa(&a, &b);
	print_stacks(&a, &b);
	return (0);
}

bool	init_stack(t_stack *stack, int argc, char *argv[])
{
	int	current_arg;

	if (argc == 1)
		return (false);
	current_arg = argc - 1;
	while (current_arg > 0)
		if (!push(stack, ft_atoi(argv[current_arg--])))
			return (false);
	return (true);
}
