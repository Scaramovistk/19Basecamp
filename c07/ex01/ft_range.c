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

int *ft_range(int min, int max)
{
    unsigned int    i;
    int     write;
    int     nb;
    int     *p;

    write = 0;
    if(min >= max || min < -2147483648 || max > 2147483647)
        return(NULL);
    if (min < 0)
        min = min * (-1);
    p[max - min]
    p = malloc(sizeof(int) * (max - min));
    nb = min;
    while (nb < max)
    {
        p[write] = nb;
        write++;
        nb++;
    }
    return (p);
}

int main (void)
{
    int *i;
    int row = 0;
    i = ft_range(2,8);
    printf("%d\n", i[row]);
    while (row < (8 - 4))
    {
        printf("%d\n", i[row]);
        row++;
    }
    return (0);
}