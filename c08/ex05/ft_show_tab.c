/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 05:55:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/22 13:16:04 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_stock_str.h"

int     ft_strlen(char *str)
{
    int     size;

    size = 0;
    while(str[size] != '\0')
        size++;
    return (size);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dest;

	i = 0;
	dest = malloc(sizeof(char) * ft_strlen(src) + 1);
	if (dest == NULL)
		return (NULL);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
    int row;
    t_stock_str *tab; 
    tab = malloc(sizeof(t_stock_str) * (ac + 1));
    if (tab == NULL)
        return (NULL);
    row = 0;
    while (row < ac)
    {
        tab[row].size = ft_strlen(av[row]);
        tab[row].str = av[row];
        tab[row].copy = ft_strdup(av[row]);
        row++;
    }
    tab[row].str = 0;
    return (tab);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
	{
		ft_putchar(str[size]);
		size++;
	}
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

void	ft_show_tab(struct s_stock_str *par)
{
	int		row;

	row = 0;
	while (par[row].str != 0)
	{
		ft_putstr(par[row].str);
		ft_putstr("\n");
		ft_putnbr(par[row].size);
		ft_putstr("\n");
		ft_putstr(par[row].copy);
		ft_putstr("\n");
		row++;
	}
}

	#include <stdio.h>
	#include <stdlib.h>
	int  main(int argc, char **argv)
	{
		ft_show_tab(ft_strs_to_tab(argc, argv));
	}