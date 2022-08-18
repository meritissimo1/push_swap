/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:35:09 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/16 16:11:26 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    ft_swap_a(t_stacks *stack)
{
    printf("swap_a\n");
	stack->a->value ^= stack->a->next->value;
    stack->a->next->value ^= stack->a->value;
    stack->a->value ^= stack->a->next->value;
}

void    ft_swap_b(t_stacks *stack)
{
    printf("swap_b\n");
	stack->b->value ^= stack->b->next->value;
    stack->b->next->value ^= stack->b->value;
    stack->b->value ^= stack->b->next->value;
}

void    ft_swap_both(t_stacks *stack)
{
    ft_swap_a(stack);
    ft_swap_b(stack);
}