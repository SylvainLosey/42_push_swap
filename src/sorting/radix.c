/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/10 18:59:59 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/18 15:39:14 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *a, t_stack *b, int length)
{
	int	maximum_bits;
	int	i;
	int	j;

	i = 0;
	maximum_bits = number_of_bits_in_decimal(length - 1);
	while (i < maximum_bits)
	{
		j = 0;
		while (j++ < length)
		{
			if ((((*a)->index >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
		}
		while ((*b) != NULL)
			pa(a, b);
		i++;
	}
}
