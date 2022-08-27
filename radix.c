/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:31:19 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/26 09:48:25 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_bit_significant(int number, int i)
{	
	return ((number >> i) & 1);
}

static void	ft_sort_by_bit(t_stacks *stack, int i)
{
	int		j;

	j = 0;
	while (j < stack->total)
	{		
		if (ft_bit_significant(stack->a->value, i))
			rotate_a(stack);
		else
			push_b(stack);
		j++;
	}
}

void	radix_sort(t_stacks *stack)
{
	int		i;

	i = 0;
	while (!ft_is_sorted(stack))
	{
		ft_sort_by_bit(stack, i);
		while (stack->b)
			push_a(stack);
		i++;
	}
}
