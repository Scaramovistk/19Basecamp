/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 21:55:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:44:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_iterative_factorial(int nb)
{   
    int     fact;
    fact = 1;
    if (nb < 0)
        return (0);
    while(nb != 0)
    {
        fact = fact * nb;
        nb--;
    }
    return (fact);
}

#include <stdio.h>
int main(void)
{
    int c = ft_iterative_factorial(12);
    printf("%d", c);
    return 0;
}