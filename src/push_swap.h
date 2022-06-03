/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:17:38 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/03 14:49:00 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdbool.h>
# include "../libft/src/libft.h"

bool	init_stack(t_stack *stack, int argc, char *argv[]);

/*
** -------------------------- Operations ---------------------------------
*/

bool	sa(t_stack *a);
bool	sb(t_stack *b);
bool	ss(t_stack *a, t_stack *b);

bool	pa(t_stack *a, t_stack *b);
bool	pb(t_stack *a, t_stack *b);

/*
** -------------------------- Utils ---------------------------------
*/

void	print_stacks(t_stack *a, t_stack *b);

#endif