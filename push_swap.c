/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 10:15:10 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/25 11:47:24 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stacks *stack)
{
	t_node	*start_a;
	t_node	*start_b;
	int		i;

	i = 0;
	start_b = stack->b;
	start_a = stack->a;
	while (i < stack->size_a)
	{
		printf("stack_a: %d ", start_a->value);
		printf("<-anterior: %d \n", start_a->previous->value);
		start_a = start_a->next;
		i++;
	}
	printf("\n");
	i = 0;
	while (i < stack->size_b)
	{
		printf("stack_b: %d ", start_b->value);
		printf("<-anterior: %d \n", start_b->previous->value);
		start_b = start_b->next;
		i++;
	}
	printf("tamanho de a: %d\n", stack->size_a);
	printf("tamanho de b: %d\n\n\n", stack->size_b);
}

void	sort(t_stacks *stack, int argc)
{
	if (ft_is_sorted(stack))
		return ;
	else if (argc == 2)
		sort_two(stack);
	else if (argc == 3)
		sort_three(stack);
	else if (argc == 5)
		sort_five(stack);
	else
		radix_sort(stack);
}

void	circular(t_stacks *stack)
{
	t_node *aux;

	aux = stack->a;
	while (aux->next)
		aux = aux->next;
	stack->a->previous = aux;
	aux->next = stack->a;	
}

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
	aux = stack->a;
}

void	init_stack(t_stacks *stack, int argc)
{
	stack->a = NULL;
	stack->b = NULL;
	stack->total = argc - 1;
	stack->size_a = argc -1;
	stack->size_b = 0;
}

int	main(int argc, char **argv)
{
	t_stacks	*stack;
	int			i;
	int			*test;
	int			aux[1000];

	i = 0;
	check_for_errors(argv, argc-1);
	stack = (t_stacks *)malloc(sizeof(t_stacks));
	init_stack(stack, argc);
	test = ft_normalize(argv, argc - 1, aux);
	while (i < argc - 1)
	{
		insert_end(stack, test[i]);
		i++;
	}
	circular(stack);
	sort(stack, argc -1);
	print_stack(stack);
	free(stack);
	return (0);
}
