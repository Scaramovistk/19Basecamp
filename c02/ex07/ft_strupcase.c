/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex07.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 20:53:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:41:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char 	*ft_strupcase(char *str)
{
	int     i;

    i = 0;
    while(str[i] != '\0')
    {   
        if(str[i] >= 97 && str[i] <= 122)
		{	
			str[i] -= 80;
			str[i] += '0';
		}
        i++;
    }
	return (str);
}

int main (void)
{

char a[6] = "Gabrie";

ft_strupcase(a);
	
int i = 0;
	printf("%s", a);

		return 0;
}