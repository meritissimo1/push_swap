/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcrodr <marcrodr@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:00:31 by marcrodr          #+#    #+#             */
/*   Updated: 2022/08/10 16:25:20 by marcrodr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

long long int	ft_itoll(char *str)
{
	int				i;
    int				count;
	long long int	is_negative;
	long long int	result;

	i = 0;
	is_negative = 1;
	result = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			is_negative = -1;
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= 48) && (str[i] <= 57))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (is_negative * result);
}
