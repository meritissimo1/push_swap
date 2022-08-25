/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 16:52:45 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/25 10:08:10 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_stacks *stack)
{
	t_node	*aux;
	t_node	*tail;
	t_node	*head;

	aux = pop_a(stack);
	head = stack->b;
	if (!head)
		connect_node(aux, aux);
	else
	{
		tail = head->previous;
		aux->next = head;
		head->previous = aux;
		aux->previous = tail;
		tail->next = aux;
	}
	stack->size_a -= 1;
	stack->size_b += 1;
	stack->b = aux;
	ft_printf("push b\n");
}

void	push_a(t_stacks *stack)
{
	t_node	*aux;
	t_node	*tail;
	t_node	*head;

	aux = pop_b(stack);
	head = stack->a;
	if (!head)
		connect_node(aux, aux);
	else
	{
		tail = head->previous;
		aux->next = head;
		head->previous = aux;
		aux->previous = tail;
		tail->next = aux;
	}
	stack->size_a += 1;
	stack->size_b -= 1;
	stack->a = aux;
	ft_printf("push a\n");
}

void	push_both(t_stacks *stack)
{
	push_a(stack);
	push_b(stack);
}