/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 13:02:32 by asaenko           #+#    #+#             */
/*   Updated: 2023/12/05 14:47:17 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

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

int	check_duplicates(char *str)
{
	int	i;
	int	j;
	int	duplicates;
	int	len;

	i = 0;
	j = i + 1;
	len = ft_strlen(str);
	duplicates = 0;
	while (i < len - 1)
	{
		while (j < len)
		{
			if (str[i] == str[j])
			{
				duplicates++;
			}
			j++;
		}
		i++;
	}
	return (duplicates);
} 

int	check_base(char *str)
{
	int	i;
	int j;
	int len = ft_strlen(str);
	int	duplicates;	

	if(!str || len == 1)
		return (0);
	i = 0;
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+')
			return (0);
		i++;
	}

	i = 0;
	j = 1;
	duplicates = check_duplicates(str);
	if (duplicates)
	{
		return (0);
	}
	return (len);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_n;
	char	c;
	
	base_n = check_base(base);
	if (base_n > 0)
	{
		if (nbr < base_n)
		{
			char c = base[nbr];
			write(1, &c, 1);
		}
		else
		{
			ft_putnbr_base(nbr / base_n, base);
			c = base[nbr % base_n];
			write(1, &c , 1);
		}
	}
}
/*
int	main(void)
{
	int		n;
	char 	*decimal;
	char	*binary;
	char	*hexadecimal;
	char	*octal;
	char	*wrong;

	n = 3;
	decimal = "0123456789";
	binary = "01";
	hexadecimal = "0123456789ABCDEF";
	octal = "poneyvif";
	wrong = "001";
	ft_putnbr_base(n, decimal);
	write(1, "\n", 1);
    ft_putnbr_base(n, binary);
    write(1, "\n", 1);
    ft_putnbr_base(n, hexadecimal);
    write(1, "\n", 1);
    ft_putnbr_base(n, octal);
    write(1, "\n", 1);
    ft_putnbr_base(n, wrong);
    write(1, "\n", 1);
}*/
