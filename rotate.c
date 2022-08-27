/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:25:14 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/27 17:01:44 by marcrodr         ###   ########.fr       */
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
	ft_printf("ra\n");
}

void	rotate_b(t_stacks *stack)
{
	t_node	*head;

	head = stack->b;
	if (head == NULL)
		return ;
	head = stack->b->next;
	stack->b = head;
	ft_printf("rb\n");
}

void	rotate_both(t_stacks *stack)
{
	t_node	*head_b;
	t_node	*head_a;

	head_b = stack->b;
	head_a = stack->a;
	if (head_a == NULL)
		return ;
	head_a = stack->a->next;
	stack->a = head_a;
	if (head_b == NULL)
		return ;
	head_b = stack->b->next;
	stack->b = head_b;
	ft_printf("rr\n");
}
