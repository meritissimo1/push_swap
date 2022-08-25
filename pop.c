/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_push.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 10:13:16 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/25 10:04:19 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	connect_node(t_node *first, t_node *second)
{
	first->previous = second;
	second->next = first;
}

t_node	*pop_a(t_stacks *stack)
{
	t_node	*aux;
	t_node	*tail;
	t_node	*head;

	head = stack->a;
	if (!head)
		return (NULL);
	aux = head;
	if (head->next != head)
		{
			tail = head->previous;
			head = head->next;
			connect_node(head, tail);
		}
	else
		head = NULL;
	aux->previous = NULL;
	aux->next = NULL;		
	stack->a = head;
	return (aux);
}

t_node	*pop_b(t_stacks *stack)
{
	t_node	*aux;
	t_node	*tail;
	t_node	*head;

	head = stack->b;
	if (!head)
		return (NULL);
	aux = head;
	if (head->next != head)
		{
			tail = head->previous;
			head = head->next;
			connect_node(head, tail);
		}
	else
		head = NULL;
	aux->previous = NULL;
	aux->next = NULL;		
	stack->b = head;
	return (aux);
}
