/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   little_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:34:02 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/25 10:10:23 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_second_b(t_stacks *stack, int node)
{
	if (node == 2)
		swap_a(stack);
	if (node == 3)
	{
		rotate_a(stack);
		swap_a(stack);
	}
	if (node == 4)
		reverse_rotate_a(stack);
	push_b(stack);
}

void	push_smallest_b(t_stacks *stack, int node)
{
	if (node == 2)
		swap_a(stack);
	if (node == 3)
	{
		rotate_a(stack);
		swap_a(stack);
	}
	if (node == 4)
	{
		reverse_rotate_a(stack);
		reverse_rotate_b(stack);
	}
	if (node == 5)
		reverse_rotate_a(stack);
	push_b(stack);
}

int	find_smallest_number(t_stacks *stack, int node)
{
	int		i;
	int		smallest;
	t_node	*aux;

	i = 0;
	smallest = stack->a->value;
	aux = stack->a;
	while (i < node)
	{
		if (aux->value < smallest)
			smallest = aux->value;
		aux = aux->next;
		i++;			
	}
	return (smallest);
}

int	find_smallest_node(t_stacks *stack, int node)
{
	int		i;
	int		smallest;
	t_node	*aux;

	i = 1;
	smallest = find_smallest_number(stack, node);
	aux = stack->a;
	while (i < stack->total)
	{
		if (aux->value == smallest)
			break ;
		i++;
		aux = aux->next;
	}
	return (i);
}

void	sort_five(t_stacks *stack)
{
	int	node;

	node = find_smallest_node(stack, 5);
	push_smallest_b(stack, node);
	node = find_smallest_node(stack, 4);
	push_second_b(stack, node);
	sort_three(stack);
	push_a(stack);
	push_a(stack);	
}