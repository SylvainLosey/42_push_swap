/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:14:09 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/18 16:11:57 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_stack	a;
	t_stack	b;

	a = NULL;
	b = NULL;
	if (argc == 1)
		return (0);
	if (!init_stack(&a, argc, argv))
		return (return_error());
	if (!is_sorted(&a))
		sort_stacks(&a, &b);
	return (0);
}
