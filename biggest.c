/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 15:48:45 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/23 16:00:51 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	biggest(t_stacks *stack)
{
	int		bigger;
	t_node	*aux;

	aux = stack->a;
	bigger = aux->value;
	while (aux)
	{
		if (aux->value > bigger)
			bigger = aux->value;					
		aux = aux->next;		
	}	
	return (bigger);
}
