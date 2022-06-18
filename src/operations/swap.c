/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:55:35 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/11 15:27:44 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	_swap(t_stack *stack)
{
	t_node	*first_elem;
	t_node	*second_elem;

	if (stack_length(stack) <= 1)
		return (false);
	first_elem = pop(stack);
	second_elem = pop(stack);
	return (push_existing_node(stack, first_elem) && push_existing_node(stack, second_elem));
}

bool	sa(t_stack *a)
{
	ft_printf("sa\n");
	return (_swap(a));
}

bool	sb(t_stack *b)
{
	ft_printf("sb\n");
	return (_swap(b));
}

bool	ss(t_stack *a, t_stack *b)
{
	ft_printf("ss\n");
	return (_swap(a) && _swap(b));
}
