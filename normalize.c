/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:08:30 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/22 09:39:25 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "push_swap.h"

int*	ft_normalize(char **argv, int size, int *aux)
{
	int	stack_a[size];
	int	i;
	int	j;
	int	normalizer;

	i = 0;
	j = 1;
	while (i < size)
	{
		aux[i] = ft_atoi(argv[j]);
		stack_a[i] = ft_atoi(argv[j]);
		//printf("%d %d\n", stack_a[i], aux[i]);
		i++;
		j++;
	}
	i = 0;
   while (i < size)
	{
		normalizer = 0;
		j = 0;
		while (j < size)
		{
			if(stack_a[i] > stack_a[j] && j != i)
				normalizer++;
			aux[i] = normalizer;
			j++;
		}
		i++;
	}
	return(aux);
}