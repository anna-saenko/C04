/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 11:27:27 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/04 12:03:29 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	is_allowed_sign(char c)
{
	return (c == ' ' || c == '-' || c == '+');
}

char	is_number(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(char *str)
{
	int	i;
	int	minus;
	int	sum;

	i = 0;
	minus = 0;
	sum = 0;
	while (str[i] != 0
		&& (is_number(str[i])
			|| is_allowed_sign(str[i])))
	{
		if (str[i] == '-')
		{
			minus++;
		}
		if (is_number(str[i]))
		{
			sum *= 10;
			sum += (str[i] - 48);
		}
		i++;
	}
	if (minus % 2 != 0)
		sum = -sum;
	return (sum);
}
/*
#include <stdio.h>
int	main(void)
{
	int	res;

	res = ft_atoi(" ---+--+1234ab567");
	printf("%d\n", res);
}*/
