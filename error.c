/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:22:57 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/27 15:47:01 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stacks *stack, int argc)
{
	t_node	*aux;
	t_node	*next;
	int		i;

	i = 0;
	aux = stack->a;
	while (i < argc)
	{
		next = aux->next;
		free(aux);
		aux = next;
		i++;
	}
}

void	check_int_size(char *argv)
{
	long long int	number;

	number = ft_itoll(argv);
	if (number > INT_MAX)
	{
		ft_printf("Error\n");
		exit(-1);
	}
	else if (number < INT_MIN)
	{
		ft_printf("Error\n");
		exit(-1);
	}
}

void	check_for_digits(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '-' || argv[i] == '+')
		i = 1;
	while (argv[i])
	{
		if (ft_isdigit((int)argv[i]) == 0)
		{
			ft_printf("Error\n");
			exit(-1);
		}
		i++;
	}
}

void	check_for_errors(char **argv, int argc)
{
	int	i;
	int	j;

	i = 1;
	if (argc < 2)
		exit(0);			
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (!ft_strncmp(argv[i], argv[j], sizeof(argv[i])))
			{
				ft_printf("Error\n");
				exit(-1);
			}
			j++;
		}
		check_for_digits(argv[i]);
		check_int_size(argv[i]);
		i++;
	}
}
