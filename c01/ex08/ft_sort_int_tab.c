/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex08.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>			+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 20:10:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int		read;
	int		aux;
	int		row;

	read = 0;
	row = 0;
	while (row <= size * (size - 2))
	{
		if (read == size - 1)
		{
			read = 0;
		}
		if (tab[read] <= tab[read + 1])
		{
			aux = tab[read];
			tab[read] = tab[read + 1];
			tab[read + 1] = aux;
		}
		read++;
		row++;
	}
}


int        main(void)
{
    int tab[9] = {24,5,2,3,4,8,16,20,30};
    ft_sort_int_tab(tab, 8);
    for(int i = 0; i < 9; i++)
    {
        printf("%d ", tab[i]);
    }
}
