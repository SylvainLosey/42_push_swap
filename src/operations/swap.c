/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:55:35 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/18 16:23:58 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	_swap(t_stack *stack)
{
	t_node	*first_elem;
	t_node	*second_elem;
	bool	first_elem_result;
	bool	second_elem_result;

	if (stack_length(stack) <= 1)
		return (false);
	first_elem = pop(stack);
	second_elem = pop(stack);
	first_elem_result = push_existing_node(stack, first_elem);
	second_elem_result = push_existing_node(stack, second_elem);
	return (first_elem_result && second_elem_result);
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
