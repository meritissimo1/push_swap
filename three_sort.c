/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 17:24:04 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/25 11:50:41 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    set_values(t_stacks *stack, int *current, int *next, int *previous)
{
    *current = stack->a->value;
    *next = stack->a->next->value;
    *previous = stack->a->previous->value;
}

void    sort_three(t_stacks *stack)
{
    int current;
    int next;
    int previous;

    set_values(stack, &current, &next, &previous);
    if ((current > next && current < previous && next < previous)
        || (current > next && current >  previous && next > previous)
        || (current < next && current < previous && next > previous))
        swap_a(stack);
    if (ft_is_sorted(stack))
        return ;
    set_values(stack, &current, &next, &previous);
    if (current < next && current > previous && next > previous)
        reverse_rotate_a(stack);
    if (current > next && current > previous && next < previous)
        rotate_a(stack);
}

void	sort_two(t_stacks *stacks)
{
	if (stacks->a->value > stacks->a->next->value)
		swap_a(stacks);	
}