/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:53:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:39:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_str_is_printable(char *str)
{
	int     i;

    i = 0;
    while(str[i] != '\0')
    {   
        if(str[i] < 32 || str[i] > 127)
		{	
			return (0);
		}
        i++;
    }
	return (1);
}
