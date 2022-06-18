/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:59:59 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/11 15:34:45 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *a, t_stack *b, int length)
{
	int	maximum_bits;
	int	i;

	maximum_bits = number_of_bits_in_decimal(length - 1);
	while (maximum_bits > 0)
	{
		i = 0;
		while (i < length)
		{
			if ((((*a)->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			i++;
		}
		while ((*b) != NULL)
			pa(a, b);
		maximum_bits--;
	}
}
