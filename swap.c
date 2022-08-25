/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:35:09 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/25 10:09:11 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_stacks *stack)
{
	ft_printf("swap_a\n");
	stack->a->value ^= stack->a->next->value;
	stack->a->next->value ^= stack->a->value;
	stack->a->value ^= stack->a->next->value;
}

void	swap_b(t_stacks *stack)
{
	ft_printf("swap_b\n");
	stack->b->value ^= stack->b->next->value;
	stack->b->next->value ^= stack->b->value;
	stack->b->value ^= stack->b->next->value;
}

void	swap_both(t_stacks *stack)
{
	swap_a(stack);
	swap_b(stack);
}
