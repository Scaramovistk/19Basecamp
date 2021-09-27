/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:29:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:44:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_recursive_factorial(int nb)
{   
    int fact;

    fact = 1;
    if(nb <= 0)
        return (0);
    if(nb != 2)
        fact = ft_recursive_factorial(nb - 1);
    fact = fact * nb;
    return (fact);
}

#include <stdio.h>
int main(void)
{
    int c = ft_recursive_factorial(3);
    printf("%d", c);
    return 0;
}