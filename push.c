/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:52:45 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/17 16:48:23 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b(t_stacks *stack)
{
	t_node	*aux_b;
	t_node	*aux_a;

	printf("push_b\n");
	aux_a = (t_node *)malloc(sizeof(t_node));
	aux_b = (t_node *)malloc(sizeof(t_node));
	if(stack->b == NULL)
	{
		aux_a = stack->a->next;	
		aux_b->value = stack->a->value;
		aux_b->next = NULL;
		aux_b->previous = NULL;
		stack->b = aux_b;
		stack->a = aux_a;
		stack->size_a -= 1;
		stack->size_b += 1;
		stack->a->previous->value = 0;
	}
	else
	{	aux_b->next = stack->b;	
		aux_b->value = stack->a->value;
		aux_b->previous = NULL;
		stack->b = aux_b;
		aux_a = stack->a->next;
		stack->a = aux_a;
		stack->size_a -= 1;
		stack->size_b += 1;
		stack->a->previous->value = 0;
	}

}

void	ft_push_a(t_stacks *stack)
{
	t_node	*aux_b;
	t_node	*aux_a;

	printf("push_a\n");
	aux_a = (t_node *)malloc(sizeof(t_node));
	aux_b = (t_node *)malloc(sizeof(t_node));
	if(stack->a == NULL)
	{
		aux_b = stack->b->next;	
		aux_a->value = stack->b->value;
		aux_a->next = NULL;
		aux_a->previous = NULL;
		stack->a = aux_a;
		stack->b = aux_b;
		stack->size_a += 1;
		stack->size_b -= 1;
		stack->b->previous->value = 0;
	}
	else
	{
		aux_a->next = stack->a;	
		aux_a->value = stack->b->value;
		aux_a->previous = NULL;
		stack->a = aux_a;
		aux_b = stack->b->next;
		stack->b = aux_b;
		stack->size_a += 1;
		stack->size_b -= 1;
	}
}
