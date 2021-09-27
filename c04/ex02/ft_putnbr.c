/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 20:07:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int nb)
{
    unsigned int n;

    if (nb < 0)
    {
        ft_putchar('-');
        n = -nb;
    }
    else
    {
        n = nb;
    } 
    if (n >= 10)
    {
        ft_putnbr(n / 10);
        n %= 10;
    }
    ft_putchar(n + '0');
}

//    int main()
//    {   
//        int mim = -2147483648;
//        int max = 2147483647;
//
//        ft_putnbr(mim);
//        ft_putchar('\n');
//        ft_putnbr(max);
//
//        return 0;
//    }