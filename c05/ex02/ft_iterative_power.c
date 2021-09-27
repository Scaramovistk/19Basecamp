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

int ft_iterative_power(int nb, int power)
{   
    int result;

    result = 1;
    if (power < 0)
        return (0);
    if (power == 0 && nb == 0)
        return (1);
    while(power != 0)
    {
        result = result * nb;
        power--;
    }
    return (result);
}

#include <stdio.h>
int main(void)
{
    int c = ft_iterative_power(4, -1);
    printf("%d", c);
    return 0;
}