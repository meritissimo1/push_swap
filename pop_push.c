/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:13:16 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/18 10:22:28 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_push_b_empty(t_stacks *stack, t_node *aux_a, t_node *aux_b)
{
	aux_a = stack->a->next;	
	aux_b->value = stack->a->value;
	aux_b->next = NULL;
	stack->b = aux_b;
	stack->a = aux_a;
	stack->size_a -= 1;
	stack->size_b += 1;
}

void   ft_push_a_empty(t_stacks *stack, t_node *aux_a, t_node *aux_b)
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