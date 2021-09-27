/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:17:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/15 07:06:10 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(char **a, char **b)
{
	char	*aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

void	ft_putstr(char *str)
{
	int		size;

	size = 0;
	while (str[size] != '\0')
	{
		write(1, &str[size], 1);
		size++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int		n;

	n = 0;
	while (s1[n] == s2[n] && s1[n] != '\0' && s2[n] != '\0')
	{
		n++;
	}
	return (s1[n] - s2[n]);
}

void	ft_sort_int_tab(int argc, char **argv)
{
	int		read;
	int		row;

	read = 0;
	row = 0;
	while (row <= argc * (argc - 2))
	{
		if (read == argc - 1)
		{
			read = 0;
		}
		if (ft_strcmp(argv[read], argv[read + 1]) > 0)
			ft_swap(&argv[read], &argv[read + 1]);
		read++;
		row++;
	}
}

int     main(int argc, char **argv)
{
    int     i;
	int		row;

    i = 1;
	if (argc > 1)
	{
		ft_sort_int_tab(argc, argv);
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
			i++;
		}
	}
    return (0);
}