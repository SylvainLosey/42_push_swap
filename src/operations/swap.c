/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 11:55:35 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/03 14:17:42 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	swap(t_stack *stack)
{
	t_node	*first;
	t_node	*second;

	if (stack_length(stack) <= 1)
		return (false);
	first = *stack;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*stack = second;
	return (true);
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
