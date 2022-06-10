/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 14:37:19 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/10 11:52:29 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	is_not_digit_or_minus(int c)
{
	return (!ft_isdigit(c) && c != '-');
}

// First check if all chars are either digit or a - (spaces trimmed by split)
// Then check that it isn't a huge number longer than a long (>10 digits)
// Then atoi to a long, if its larger than an int the arg isn't valid
bool	argument_is_valid(char *str)
{
	long	i;

	if (ft_stritercount(str, is_not_digit_or_minus) > 0)
		return (false);
	if (ft_stritercount(str, ft_isdigit) > 10)
		return (false);
	i = ft_atoi(str);
	if (i < INT_MIN || i > INT_MAX)
		return (false);
	return (true);
}

// If the string contains a space it means the arguments were received as a 
// string, otherwise they would have been split into an array of strings
bool	args_were_passed_as_string(char *str)
{
	char	*result;

	result = ft_strchr(str, ' ');
	if (result == NULL)
		return (false);
	return (true);
}

bool	no_duplicate_in_stack(t_stack *head)
{
	t_node	*iterator;
	t_node	*checker;

	iterator = *head;
	while (iterator->next != NULL)
	{
		checker = iterator->next;
		while (checker != NULL)
		{
			if (iterator->value == checker->value)
				return (false);
			checker = checker->next;
		}
		iterator = iterator->next;
	}
	return (true);
}
