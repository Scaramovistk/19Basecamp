/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex05.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 09:29:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:44:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_sqrt(int nb)
{
    int odd;
    int sqrt;

    odd = 1;
    sqrt = 0;
    while(nb > 0)
    {   
        if (odd > nb)
            return (0);
        if (odd % 2 == 1)
            if(nb - odd >= 0)
            {
                nb = nb - odd;
                sqrt++;
            }
        odd++;
    }
    return(sqrt);
}

#include <stdio.h>
int main ()
{
	int nb;
	nb = 20;
	while (nb < 2147483647)
	{
		if (ft_sqrt(nb) != 0)
			printf("sqr of %d is %d \n", nb, ft_sqrt(nb));
	nb++;
	}
}