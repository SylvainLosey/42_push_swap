/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 10:13:03 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/11 15:26:44 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	push(t_stack *stack, int value)
{
	t_node	*new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
		return (false);
	new_node->value = value;
	new_node->index = -1;
	new_node->next = *stack;
	*stack = new_node;
	return (true);
}

bool	push_existing_node(t_stack *stack, t_node *node)
{
	node->next = *stack;
	*stack = node;
	return (true);
}

// Beware: this function doesn't handle an empty stack correctly
t_node	*pop(t_stack *stack)
{
	t_node	*tmp;

	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = NULL;
	return (tmp);
}

void	print_stack(t_stack *stack)
{
	t_node	*tmp;

	if (*stack == NULL)
		ft_printf(" Empty stack");
	tmp = *stack;
	while (tmp != NULL)
	{
		ft_printf(" | %d(%d)", tmp->value, tmp->index);
		tmp = tmp->next;
	}
	ft_printf("\n");
}

int	stack_length(t_stack *stack)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = *stack;
	while (tmp != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
