/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 07:14:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/15 07:06:10 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

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

//	#include <stdio.h>
//	int	main (int argc, char **argv)
//	{
//		int		index;
//		struct s_stock_str	*structs;
//
//		structs = ft_strs_to_tab(argc, argv);
//		index = 0;
//		while (index < argc)
//		{
//			printf("%d\n", index);
//			printf("\t| original : $%s$ @ %p\n", structs[index].str, structs[index].str);
//			printf("\t|   copied : $%s$ @ %p\n", structs[index].copy, structs[index].copy);
//			printf("\t|     size : %d\n", structs[index].size);
//			index++;
//		}
//	}