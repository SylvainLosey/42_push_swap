/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finders.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 15:02:23 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/10 18:26:49 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*find_node(t_node *head, int value)
{
	t_node	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		if (tmp->value == value)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

t_node	*find_last_node(t_node *head)
{
	t_node	*tmp;

	tmp = head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

t_node	*find_before_last_node(t_node *head)
{
	t_node	*tmp;

	tmp = head;
	while (tmp->next->next != NULL)
		tmp = tmp->next;
	return (tmp);
}
