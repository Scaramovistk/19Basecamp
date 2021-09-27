/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex03.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:46:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:44:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

int ft_recursive_power(int nb, int power)
{   
    int result;

    result = 1;
    if (power < 0)
        return (0);
    if (power == 0 && nb == 0)
        return (1);
    if (power > 0)
        result = ft_recursive_power(nb, power - 1);
    result = result * nb;
    return (result);
}

#include <stdio.h>
int main(void)
{
    int c = ft_recursive_power(-4,8);
    printf("%d", c);
    return 0;
}