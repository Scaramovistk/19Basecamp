/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 20:43:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
    write(1, &c, 1);
}

char    ft_convert_base (int nbr, int base)
{
    int res;
    int i;
    char    result[100];

    i = 0; 
    while (nbr != 0)
    {
        res = nbr % base;
        if (res < 10)
            result[i] = 48 + res;
        else 
            result[i] = 55 + res;
        nbr = nbr / base;
        i++;
    }
    return (&result);
}

int     ft_check_base (char *base)
{
    int     size;
    int     i;
    int     row;

    size = 0;
    i = 0;
    while (base[size])
        size++;
    if (size < 1)
        return (0);
    while (i < size)
    {
        if ((base[i] == ' ' || base[i] == '-') || (base[i] == '+'))
            return (0);
        row = 0;
        while (row < (size - 1))  
            if (base[row] == base[i])
                return (0);
        i++;
    }
    return (size);
}

void	ft_putnbr_base_recursive(int nbr, char *base, int size)
{
	if (nbr == -2147483648)
	{
		ft_putnbr_base_recursive(nbr / size, base, size);
		write(1, &(base[-(nbr % size)]), 1);
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base_recursive(-nbr, base, size);
	}
	if (nbr > size - 1)
		ft_putnbr_base_recursive(nbr / size, base, size);
	write(1, &(base[nbr % size]), 1);
}

void ft_putnbr_base(int nbr, char *base)
{
    int     size;

    size = ft_check_base(base);
    if (size < 0)
        ft_putnbr_base_recursive(nbr, base, size);
}

#include <stdio.h>
int main(void)
{
    // display integer into character
   // for (i = j-1; i >= 0; i--)
     //       printf("%c", hexadecimalnum[i]);
    char base[] = "0123456789ABCDEF";
    int nbr = 12;

    ft_putnbr_base(nbr, base);
    return 0;
}