/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:07:29 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/27 17:00:01 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_a(t_stacks *stack)
{
	t_node	*aux;

	aux = stack->a;
	if (aux == NULL)
		return ;
	aux = aux->previous;
	stack->a = aux;
	ft_printf("rra\n");
}

void	reverse_rotate_b(t_stacks *stack)
{
	t_node	*aux;

	aux = stack->b;
	if (aux == NULL)
		return ;
	aux = aux->previous;
	stack->b = aux;
	ft_printf("rrb\n");
}

void	reverse_rotate_both(t_stacks *stack)
{
	t_node	*aux_a;
	t_node	*aux_b;

	aux_a = stack->a;
	aux_b = stack->b;
	if (aux_a == NULL)
		return ;
	aux_a = aux_a->previous;
	stack->a = aux_a;
	if (aux_b == NULL)
		return ;
	aux_b = aux_b->previous;
	stack->b = aux_b;
	ft_printf("rrr\n");
}
