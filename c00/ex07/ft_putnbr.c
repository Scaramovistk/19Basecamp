/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 12:22:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/09 12:24:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int		a;

	if (nb < 0)
	{
		ft_putchar('-');
		a = -nb;
	}
	else
	{
		a = nb;
	}
	if (a >= 10)
	{
		ft_putnbr(a / 10);
		a %= 10;
	}
	ft_putchar(a + '0');
}
