/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/03 14:46:39 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/03 17:03:42 by sylvain          ###   ########.fr       */
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
