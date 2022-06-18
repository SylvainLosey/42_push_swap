/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:55:25 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/11 15:14:14 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	_rotate(t_stack *stack)
{
	t_node	*first;
	t_node	*second;
	t_node	*last;

	if (stack_length(stack) <= 1)
		return (false);
	first = *stack;
	second = first->next;
	last = find_last_node(first);
	*stack = second;
	last->next = first;
	first->next = NULL;
	return (true);
}

bool	ra(t_stack *a)
{
	ft_printf("ra\n");
	return (_rotate(a));
}

bool	rb(t_stack *b)
{
	ft_printf("rb\n");
	return (_rotate(b));
}

bool	rr(t_stack *a, t_stack *b)
{
	ft_printf("rr\n");
	return (_rotate(a) && _rotate(b));
}
