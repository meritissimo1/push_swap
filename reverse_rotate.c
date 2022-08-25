/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:25:14 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/25 10:09:23 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_stacks *stack)
{

	t_node	*head;

	head = stack->a;
	if (head == NULL)
		return ;
	head = stack->a->next;
	stack->a = head;
	ft_printf("rotate a\n");
}

void	rotate_b(t_stacks *stack)
{
	t_node	*head;

	head = stack->b;
	if (head == NULL)
		return ;
	head = stack->b->next;
	stack->b = head;
	ft_printf("rotate b\n");
}

void	rotate_both(t_stacks *stack)
{
	rotate_a(stack);
	rotate_b(stack);
}
