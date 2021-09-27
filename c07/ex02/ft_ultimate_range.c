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

#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int     *str;
    int     row;
    int     write;

    row = min;
    write = 0;
    if (min >= max)
    {
        range = NULL;
        return (-1);
    }
    str = malloc(sizeof(int) * (max - min));
    if (!str)
        return (-1);
    while (row < max)
    {
        str[write] = row;
        write++;
        row++;
    }
    *range = str;
    return (max - min);
}

int main (void)
{
    int **i;
    int row = 0;
    int j = ft_ultimate_range(i, 2, 8);
    printf("%d\n\n", j);
    while (row < (8 - 2))
    {
        printf("%d\n", i[0][row]);
        row++;
    }
    return (0);
}