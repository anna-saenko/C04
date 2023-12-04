/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:02:32 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/04 14:57:30 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		{
			i++;
		}
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;
	int len = ft_strlen(str);	

	if(!str || len == 1)
	{
		return (0);
	}
	i = 0;
	j = i + 1;
	while (str[i] < (len - 1))
	{
		while (str[j] < len)
		{
			if (str[i] == str[j])
			{
				return (0);
			}
			j++;
		}
		i++;
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_n;

	base_n = check_base(base);
	if (base)
	{
		if (nbr < base_n)
		{
			write(1, &base[nbr], 1);
		}
		else
		{
			
	}
}
