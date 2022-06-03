/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:14:09 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/03 11:51:07 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a, b;

	a = NULL;
	b = NULL;
	init_stack(&a, argc, argv);
	print_stack(&a);
	return (0);
}

bool	init_stack(t_stack *stack, int argc, char *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
		if (!push(stack, ft_atoi(argv[i++])))
			return (false);
	return (true);
}
