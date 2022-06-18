/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:11:14 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/11 15:14:14 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// Indexes a stack containing positive and negative ints from lowest to highest
// with an index starting at 0. This is extremely inefficient, but being 
// efficient isn't the goal as the exercise is to find the smallest number of 
// allowed operations to sort the given stack - indexing the stack will greatly 
// help in finding these operations.
bool	index_stack(t_stack *stack)
{
	int	length;
	int	index;

	index = 0;
	length = stack_length(stack);
	while (index < length)
	{
		index_lowest_unindexed_node(stack, index);
		index++;
	}
	return (true);
}

void	index_lowest_unindexed_node(t_stack *stack, int index)
{
	t_node	*tmp;
	t_node	*lowest;

	tmp = *stack;
	lowest = NULL;
	while (tmp != NULL)
	{
		if (tmp->index == -1 && lowest == NULL)
			lowest = tmp;
		if (lowest != NULL && tmp->index == -1 && tmp->value < lowest->value)
			lowest = tmp;
		tmp = tmp->next;
	}
	lowest->index = index;
	return ;
}
