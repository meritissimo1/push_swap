/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:07:29 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/18 08:51:41 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_reverse_rotate_a(t_stacks *stack)
{
	printf("reverse rotate a\n");
	t_node	*aux_a;
	t_node	*tail;
	int		i;

	aux_a = (t_node *)malloc(sizeof(t_node));
	tail = (t_node *)malloc(sizeof(t_node));
	i = 1;
	tail = stack->a;
	while (tail->next)
		tail = tail->next;
	aux_a->value = tail->value;
	aux_a->next = stack->a;
	tail = aux_a;
	while (i != (stack->size_a))
	{
		tail = tail->next;
		i++;
	}
	tail->next = NULL;
	stack->a = aux_a;	
}

void	ft_reverse_rotate_b(t_stacks *stack)
{
	printf("reverse rotate b\n");
	t_node	*aux_b;
	t_node	*tail;
	int		i;

	aux_b = (t_node *)malloc(sizeof(t_node));
	tail = (t_node *)malloc(sizeof(t_node));
	i = 1;
	tail = stack->b;
	while (tail->next)
		tail = tail->next;
	aux_b->value = tail->value;
	aux_b->next = stack->b;
	tail = aux_b;
	while (i != (stack->size_b))
	{
		tail = tail->next;
		i++;
	}
	tail->next = NULL;
	stack->b = aux_b;	
}

void	ft_reverse_rotate_both(t_stacks *stack)
{
	ft_reverse_rotate_a(stack);
	ft_reverse_rotate_b(stack);
}