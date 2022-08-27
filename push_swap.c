/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 10:15:10 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/26 16:20:265 by marcrodr         ###   ########.fr       */
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
	t_node *tail;
	int		i;

	i = 1;
	tail = stack->a;
	while (i < stack->size_a)
	{
		tail = tail->next;
		i++;
	}		
	stack->a->previous = tail;
	tail->next = stack->a;	
}

t_node	*insert_end(t_stacks *stack, int *value, int argc, int i)
{
	t_node	*new;
	t_node	*head;

	new = stack->a;
	while (i < argc - 1)
	{
		if (new == NULL)
		{
			new = (t_node *)ft_calloc(sizeof(t_node), 1);
			new->value = value[i];
			head = new;
			new->next = NULL;
			new->previous = NULL;
		}
		else
		{
			new->next = (t_node *)ft_calloc(sizeof(t_node), 1);
			new->next->previous = new;
			new = new->next;
			new->value = value[i];
		}
		i++;
	}	
	return (head);
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
	int			*normalized;
	int			aux[1000];
	int			i;
	
	check_for_errors(argv, argc-1);
	stack = (t_stacks *)ft_calloc(sizeof(t_stacks), 1);
	init_stack(stack, argc);
	normalized = ft_normalize(argv, argc-1, aux);
	i = 0;
	stack->a = insert_end(stack, normalized, argc, i);
	circular(stack);
	print_stack(stack);
	sort(stack, argc -1);
	print_stack(stack);
	free_stack(stack, argc-1);
	free(stack);
	exit(0);
}
