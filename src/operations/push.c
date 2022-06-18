/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:23:37 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/11 15:27:15 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	_push_on_other_stack(t_stack *stack_to_push, t_stack *stack_to_pop)
{
	if (stack_length(stack_to_pop) == 0)
		return (false);
	return (push_existing_node(stack_to_push, pop(stack_to_pop)));
}

bool	pa(t_stack *a, t_stack *b)
{
	ft_printf("pa\n");
	return (_push_on_other_stack(a, b));
}

bool	pb(t_stack *a, t_stack *b)
{
	ft_printf("pb\n");
	return (_push_on_other_stack(b, a));
}
