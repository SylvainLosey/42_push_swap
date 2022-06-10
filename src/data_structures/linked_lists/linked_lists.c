/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 16:54:23 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/10 18:26:52 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_list(t_node *head)
{
	t_node	*tmp;

	tmp = head;
	while (tmp != NULL)
	{
		ft_printf("%d - ", tmp->value);
		tmp = tmp->next;
	}
	ft_printf("\n");
}

t_node	*create_new_node(int value)
{
	t_node	*result;

	result = malloc(sizeof(t_node));
	result->value = value;
	result->next = NULL;
	return (result);
}

t_node	*insert_at_head(t_node **head, t_node *node_to_insert)
{
	node_to_insert->next = *head;
	*head = node_to_insert;
	return (node_to_insert);
}

void	insert_after_node(t_node *node_to_insert_after, t_node *node_to_insert)
{
	node_to_insert->next = node_to_insert_after->next;
	node_to_insert_after->next = node_to_insert;
}
