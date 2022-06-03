/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:55:35 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/03 14:43:08 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	swap(t_stack *stack)
{
	int	first_elem;
	int	second_elem;

	if (stack_length(stack) <= 1)
		return (false);
	first_elem = pop(stack);
	second_elem = pop(stack);
	return (push(stack, first_elem) && push(stack, second_elem));
}

bool	sa(t_stack *a)
{
	ft_printf("sa\n");
	return (swap(a));
}

bool	sb(t_stack *b)
{
	ft_printf("sb\n");
	return (swap(b));
}

bool	ss(t_stack *a, t_stack *b)
{
	ft_printf("ss\n");
	return (swap(a) && swap(b));
}
