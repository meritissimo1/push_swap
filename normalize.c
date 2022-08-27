/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:08:30 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/27 16:12:45 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"push_swap.h"

void	ft_clone(char **argv, int *clone, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		clone[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
}

int	*ft_normalize(char **argv, int size, int *aux)
{
	int	clone[1000];
	int	i;
	int	j;
	int	normalizer;

	ft_clone(argv, clone, size);
	i = 0;
	while (i < size)
	{
		normalizer = 0;
		j = 0;
		while (j < size)
		{
			if (clone[i] > clone[j] && j != i)
				normalizer++;
			aux[i] = normalizer;
			j++;
		}
		i++;
	}
	return (aux);
}
