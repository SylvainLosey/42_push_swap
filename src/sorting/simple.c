/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 16:01:37 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/18 16:22:04 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_stack *stack, int val)
{
	t_node	*head;
	int		min;

	head = *stack;
	min = head->index;
	while (head->next)
	{
		head = head->next;
		if ((head->index < min) && head->index != val)
			min = head->index;
	}
	return (min);
}

void	sort_3(t_stack *a)
{
	int		min;
	int		next_min;

	min = get_min(a, -1);
	next_min = get_min(a, min);
	if ((*a)->index == min && (*a)->next->index != next_min)
		ra_sa_rra(a);
	else if ((*a)->index == next_min)
	{
		if ((*a)->next->index == min)
			sa(a);
		else
			rra(a);
	}
	else
	{
		if ((*a)->next->index == min)
			ra(a);
		else
		{
			sa(a);
			rra(a);
		}
	}
}

void	sort_4(t_stack *a, t_stack *b)
{
	int	distance;

	distance = get_distance(a, get_min(a, -1));
	if (distance == 1)
		ra(a);
	else if (distance == 2)
	{
		ra(a);
		ra(a);
	}
	else if (distance == 3)
		rra(a);
	if (is_sorted(a))
		return ;
	pb(a, b);
	sort_3(a);
	pa(a, b);
}

void	sort_5(t_stack *a, t_stack *b)
{
	int	distance;

	distance = get_distance(a, get_min(a, -1));
	if (distance == 1)
		ra(a);
	else if (distance == 2)
	{
		ra(a);
		ra(a);
	}
	else if (distance == 3)
	{
		rra(a);
		rra(a);
	}
	else if (distance == 4)
		rra(a);
	if (is_sorted(a))
		return ;
	pb(a, b);
	sort_4(a, b);
	pa(a, b);
}

void	simple_sort(t_stack *a, t_stack *b, int length)
{
	if (length <= 1)
		return ;
	else if (length == 2)
		sa(a);
	else if (length == 3)
		sort_3(a);
	else if (length == 4)
		sort_4(a, b);
	else if (length == 5)
		sort_5(a, b);
}
