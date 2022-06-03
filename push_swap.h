#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>

typedef struct No
{
	int value;
	struct No *next;
}No;

typedef struct
{
	No *start;
	int size;
}list;

void	ft_putnbr_fd(int n, int fd);
int		ft_atoi(const char *str);
int		ft_isalpha(int n);



#endif