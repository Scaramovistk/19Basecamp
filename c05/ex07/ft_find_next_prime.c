/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:24:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/20 13:32:12 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		p;
	int		half;
	int		check;

	p = 2;
	check = 1;
	half = nb / 2;
	if (nb <= 1 || nb > 2147483647)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (p <= half)
	{
		if (nb % p == 0)
		{
			check = 0;
			break ;
		}
		p++;
	}
	if (check == 1)
		return (1);
	return (0);
}

int ft_find_next_prime(int nb)
{
	int		is_prime;

	is_prime = 0;
	if (nb <= 1)
		return (2);
	while (is_prime == 0)
	{
		is_prime = ft_is_prime(nb);
		nb++;
	}
	return (--nb);
}

   #include <stdio.h>
   int main(void)
   {

     int c = ft_find_next_prime(147811898989989894949);
       printf("%d", c);
       return 0;
   }