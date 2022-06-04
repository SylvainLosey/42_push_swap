/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:55:25 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/03 15:19:25 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	_reverse_rotate(t_stack *stack)
{
	t_node	*first;
	t_node	*before_last;
	t_node	*last;

	if (stack_length(stack) <= 1)
		return (false);
	first = *stack;
	before_last = find_before_last_node(first);
	last = before_last->next;
	*stack = last;
	last->next = first;
	before_last->next = NULL;
	return (true);
}

bool	rra(t_stack *a)
{
	ft_printf("rra\n");
	return (_reverse_rotate(a));
}

bool	rrb(t_stack *b)
{
	ft_printf("rrb\n");
	return (_reverse_rotate(b));
}

bool	rrr(t_stack *a, t_stack *b)
{
	ft_printf("rrr\n");
	return (_reverse_rotate(a) && _reverse_rotate(b));
}
