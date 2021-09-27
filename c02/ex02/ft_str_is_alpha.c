/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 11:24:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:33:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int 	ft_str_is_alpha(char *str)
{
	int     i;
    i = 0;
    while(str[i] != '\0')
    {   
        if(str[i] < 65 || ( str[i] > 90 && str[i] < 97) || str[i] > 122)
		{	
			return (0);
		}
        i++;
    }
	return (1);
}
