/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 20:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/16 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		neg;
	int		nb;
	int		i;

	neg = 1;
	i = 0;
	nb = 0;
	while (str[i] == '\t' || str[i] == '\v' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\f' || str[i] == ' ')
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = nb + str[i] - '0';
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			nb *= 10;
		i++;
	}
	nb *= neg;
	return (nb);
}

//	#include <stdio.h>
//	int main(void)
//	{
//		char a[] = " \n--+--+\n1234ab567";
//		int c = ft_atoi(a);
//		printf("%d", c);
//		return 0;
//	}