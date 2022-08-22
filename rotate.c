/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 16:25:14 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/22 10:12:57 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_stacks *stack)
{
	printf("rotate a\n");
	t_node	*aux_a;
	t_node	*tail;
	t_node	*head;

	if (stack->size_a == 1)
		return ;
	head = (t_node *)malloc(sizeof(t_node));	
	tail = stack->a;
	if (tail == NULL)
		return ;
	aux_a = stack->a->next;
	head->value = stack->a->value;
	head->next = NULL;
	while (tail->next)
		tail = tail->next;
	tail->next = head;
	stack->a = aux_a;
}

void	ft_rotate_b(t_stacks *stack)
{
	printf("rotate b\n");
	t_node	*aux_b;
	t_node	*tail;
	t_node	*head;

	head = (t_node *)malloc(sizeof(t_node));	
	
	tail = stack->b;
	if (tail == NULL)
		return ;
	aux_b = stack->b->next;
	head->value = stack->b->value;
	head->next = NULL;
	while (tail->next)
		tail = tail->next;	
	tail->next = head;
	stack->b = aux_b;	
}

void	ft_rotate_both(t_stacks *stack)
{
	ft_rotate_a(stack);
	ft_rotate_b(stack);
}