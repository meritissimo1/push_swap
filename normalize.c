/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:08:30 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/24 15:52:45 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	ft_clone(char **argv, int *stack_a, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		stack_a[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
}

int	*ft_normalize(char **argv, int size, int *aux)
{
	int	stack_a[700];
	int	i;
	int	j;
	int	normalizer;

	ft_clone(argv, stack_a, size);
	i = 0;
	while (i < size)
	{
		normalizer = 0;
		j = 0;
		while (j < size)
		{
			if (stack_a[i] > stack_a[j] && j != i)
				normalizer++;
			aux[i] = normalizer;
			j++;
		}
		i++;
	}
	return (aux);
}
