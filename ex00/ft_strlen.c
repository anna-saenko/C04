/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asaenko <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 17:35:10 by asaenko           #+#    #+#             */
/*   Updated: 2023/11/30 17:40:52 by asaenko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
/*
#include <stdio.h>
int	main(void)
{
	char	*str;
	int	res;

	str = "apple";
	res = ft_strlen(str);
	printf("Length of 'apple': %d\n", res);
}*/
