/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:14:09 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/10 14:35:16 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	if (!init_stack(&a, argc, argv))
		return (return_error());
	print_stacks(&a, &b);
	ft_printf("Stack is sorted: %d\n", is_sorted(&a));
	if (!is_sorted(&a))
		sort_stacks(&a, &b);
	print_stacks(&a, &b);
	ft_printf("Stack is sorted: %d\n", is_sorted(&a));
	return (0);
}
