/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 17:07:29 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/25 10:09:15 by marcrodr         ###   ########.fr       */
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
	ft_printf("reverse rotate a\n");
}

void	reverse_rotate_b(t_stacks *stack)
{
	t_node	*aux;

	aux = stack->b;
	if (aux == NULL)
		return ;
	aux = aux->previous;
	stack->b = aux;
	ft_printf("reverse rotate b\n");
}

void	reverse_rotate_both(t_stacks *stack)
{
	reverse_rotate_a(stack);
	reverse_rotate_b(stack);
}
