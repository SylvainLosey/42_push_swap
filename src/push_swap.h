/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:17:38 by sylvain           #+#    #+#             */
/*   Updated: 2022/06/18 16:24:24 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdbool.h>
# include "../libft/src/libft.h"

/*
** -------------------------- Structs ---------------------------------
*/
typedef struct s_node
{
	int				value;
	int				index;
	struct s_node	*next;
}	t_node;

typedef t_node*	t_stack;

/*
** -------------------------- Linked lists ---------------------------------
*/

void	print_list(t_node *head);
t_node	*create_new_node(int value);
t_node	*insert_at_head(t_node **head, t_node *node_to_insert);
void	insert_after_node(t_node *node_to_insert_after, t_node *node_to_insert);

t_node	*find_node(t_node *head, int value);
t_node	*find_last_node(t_node *head);
t_node	*find_before_last_node(t_node *head);

/*
** -------------------------- Stacks ---------------------------------
*/

bool	push(t_stack *stack, int value);
bool	push_existing_node(t_stack *stack, t_node *node);
t_node	*pop(t_stack *stack);
void	print_stack(t_stack *stack);
int		stack_length(t_stack *stack);

/*
** -------------------------- Initialization ---------------------------------
*/

bool	init_stack(t_stack *stack, int argc, char *argv[]);
bool	init_stack_from_string(t_stack *stack, char *str);
bool	add_array_of_str_to_stack(t_stack *stack, char *strs[], int len);
bool	add_str_to_stack(t_stack *stack, char *str);
bool	args_were_passed_as_string(char *str);
bool	argument_is_valid(char *str);
bool	duplicate_in_stack(t_stack *head);
bool	index_stack(t_stack *stack);
void	index_lowest_unindexed_node(t_stack *stack, int index);

/*
** -------------------------- Operations ---------------------------------
*/

bool	sa(t_stack *a);
bool	sb(t_stack *b);
bool	ss(t_stack *a, t_stack *b);

bool	pa(t_stack *a, t_stack *b);
bool	pb(t_stack *a, t_stack *b);

bool	ra(t_stack *a);
bool	rb(t_stack *b);
bool	rr(t_stack *a, t_stack *b);

bool	rra(t_stack *a);
bool	rrb(t_stack *b);
bool	rrr(t_stack *a, t_stack *b);

/*
** -------------------------- Sorting ---------------------------------
*/

void	sort_stacks(t_stack *a, t_stack *b);
bool	is_sorted(t_stack *stack);

void	radix_sort(t_stack *a, t_stack *b, int length);
void	simple_sort(t_stack *a, t_stack *b, int length);

/*
** -------------------------- Utils ---------------------------------
*/

void	print_stacks(t_stack *a, t_stack *b);
int		return_error(void);
int		number_of_bits_in_decimal(int number);
int		get_distance(t_stack *stack, int index);
void	ra_sa_rra(t_stack *a);

#endif