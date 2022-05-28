/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sylvain <sylvain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/27 17:14:09 by sylvain           #+#    #+#             */
/*   Updated: 2022/05/28 17:19:47 by sylvain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "push_swap.h"
#include "../libft/src/libft.h"

int main(void)
{
    t_node *head = NULL;
    t_node *temp;

    for (int i = 0; i<25; i++)
    {
        temp = create_new_node(i);
        insert_at_head(&head, temp);
    }

    temp = find_node(head, 13);
    ft_printf("%d\n", temp->value);

    insert_after_node(temp, create_new_node(101));
    
    
    print_list(head);
    
    return (0);
}
