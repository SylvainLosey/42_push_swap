/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 14:16:20 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/10 18:40:15 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	init_stack(t_stack *stack, int argc, char *argv[])
{
	bool	init_result;

	if (argc == 2)
	{
		if (args_were_passed_as_string(argv[1]))
			init_result = init_stack_from_string(stack, argv[1]);
		else
			init_result = add_str_to_stack(stack, argv[1]);
	}
	else
		init_result = add_array_of_str_to_stack(stack, argv + 1, argc - 1);
	if (init_result == false || duplicate_in_stack(stack))
		return (false);
	else
		return (index_stack(stack));
}

bool	init_stack_from_string(t_stack *stack, char *str)
{
	bool	result;
	char	**strs;
	int		strs_length;

	strs = ft_split(str, ' ');
	strs_length = 0;
	while (strs[strs_length])
		strs_length++;
	result = add_array_of_str_to_stack(stack, strs, strs_length);
	free(strs);
	return (result);
}

bool	add_array_of_str_to_stack(t_stack *stack, char *strs[], int len)
{
	int	current_arg;

	current_arg = len - 1;
	while (current_arg >= 0)
		if (!add_str_to_stack(stack, strs[current_arg--]))
			return (false);
	return (true);
}

bool	add_str_to_stack(t_stack *stack, char *str)
{
	if (!argument_is_valid(str))
		return (false);
	if (!push(stack, ft_atoi(str)))
		return (false);
	return (true);
}
