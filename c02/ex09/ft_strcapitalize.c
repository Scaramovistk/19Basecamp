/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex09.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 21:10:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:44:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcapitalize(char *str)
{
	int     i;

    i = 0;
    while(str[i] != '\0')
    {
        if((str[i] >= 65 && str[i] <= 90))
		{	
			str[i] -= 16;
			str[i] += '0';
		}
		if((str[i - 1] < 'a') && (str[i - 1] < '0' || str[i - 1] > '9'))
			if((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] < 'A' || str[i - 1] > 'Z'))
			{
				str[i] -= 80;
				str[i] += '0';
			}
        i++;
    }
	return (str);
}

//	void 	ft_putchar(char c)
//	{
//		write(1, &c, 1);
//	}
//	int main (void)
//	{
//		char a[] = "salut, commEnt tu vas ? 42mots quarante-deux; cinquante+et+un";
//
//		ft_strcapitalize(a);
//		
//		int i = 0;
//		while(a[i] != '\0')
//		{
//			ft_putchar(a[i]);
//			i++;
//		}
//
//		return 0;
//	}