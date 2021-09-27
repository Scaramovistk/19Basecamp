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

int ft_calc_fibo(int fibo, int prevfibo, int index)
{  
    int aux;
    if(index > 1)
    {   
        aux = fibo;
        fibo = fibo + prevfibo;
        prevfibo = aux;
        fibo = ft_calc_fibo(fibo, prevfibo, index - 1);
    }  
    return(fibo);
}

int ft_fibonacci(int index)
{   
    int fibo;

    fibo = 1;
    if(index < 0)
        return(-1);
    if (index == 0)
        return(0);
    if(index > 0)
        fibo = ft_calc_fibo(1 , 0, index);
    return (fibo);
}

#include <stdio.h>
int main(void)
{
    int c = ft_fibonacci(10);
    printf("%d", c);
    return 0;
}