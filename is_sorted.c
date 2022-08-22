/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 14:16:38 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/20 18:01:51 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ft_is_sorted(t_stacks *stack)
{
	t_node	*aux;
	int		i;

	i = 0;
	aux = stack->a;
	while (i < stack->size_a - 1)
	{
		if (aux->value > aux->next->value)
			return (false);	
		aux = aux->next;
		i++;		
	}
	return (true);	
}
