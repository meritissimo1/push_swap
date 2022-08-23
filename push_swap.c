/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 10:15:10 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/23 08:55:12 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	insert_end(t_stacks *stack, int value)
{
	t_node	*new;
	t_node	*aux;

	new = (t_node *)malloc(sizeof(t_node));
	aux = (t_node *)malloc(sizeof(t_node));
	new->value = value;
	new->next = NULL;
	if (stack->a == NULL)
	{
		stack->a = new;
		new->previous = NULL;
	}
	else
		aux = stack->a;
	while (aux->next)
		aux = aux->next;
	aux->next = new;
	new->previous = aux;
}

void	init_stack(t_stacks *stack)
{
	stack->a = NULL;
	stack->b = NULL;
}

int	main(int argc, char **argv)
{
	t_stacks	*stack;
	int			i;
	int			*test;
	int			aux[200];

	i = 0;
	stack = (t_stacks *)malloc(sizeof(t_stacks));
	init_stack(stack);
	check_for_errors(argv);
	test = ft_normalize(argv, argc - 1, aux);
	stack->total = argc - 1;
	stack->size_a = argc -1;
	while (i < argc - 1)
	{
		insert_end(stack, test[i]);
		i++;
	}	
	radix_sort(stack);
	free(stack);
	return (0);
}
