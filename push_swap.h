#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

typedef struct Node
{
	struct Node *next;
	int 		value;

}Node;

typedef struct
{
	Node *start;
	int size;
}list;

void 	insert_end(list *List, int value);
void	ft_putnbr_fd(int n, int fd);
int		ft_atoi(const char *str);
int		ft_isalpha(int n);
void    ft_sa(list *stack);



#endif