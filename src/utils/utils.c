/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:46:39 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/18 16:21:39 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stacks(t_stack *a, t_stack *b)
{
	ft_printf("a");
	print_stack(a);
	ft_printf("b");
	print_stack(b);
}

int	return_error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (1);
}

int	number_of_bits_in_decimal(int number)
{
	int	power_of_two;

	power_of_two = 0;
	while (number >= ft_pow(2, power_of_two))
		power_of_two++;
	return (power_of_two);
}

int	get_distance(t_stack *stack, int index)
{
	t_node	*head;
	int		distance;

	distance = 0;
	head = *stack;
	while (head)
	{
		if (head->index == index)
			break ;
		distance++;
		head = head->next;
	}
	return (distance);
}

void	ra_sa_rra(t_stack *a)
{
	ra(a);
	sa(a);
	rra(a);
}
