/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:00:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/14 23:40:57 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_checkstr(char *str, char *to_find, int *data)
{
	data[2] = data[1];
	while (data[2] < (data[1] + data[0]))
	{
		if (str[data[2]] != to_find[data[2] - data[1]])
		{
			data[4] = 0;
			data[3] = 0;
			break ;
		}
		else
		{
			if (data[3] != data[0] - 1)
				data[3]++;
			data[4]++;
		}
		data[2]++;
	}
}

char	*ft_strstr(char *str, char *to_find)
{
	int		data[5];

	data[0] = 0;
	data[1] = 0;
	data[2] = 0;
	data[3] = 0;
	data[4] = 0;
	while (to_find[data[0]] != '\0')
		data[0]++;
	if (data[0] == 0)
		return (str);
	while (str[data[1]] != '\0')
	{
		if (str[data[1]] == to_find[data[3]])
			ft_checkstr(str, to_find, data);
		if (data[4] == data[0])
		{
			to_find[data[1] - (data[2] - data[0])] = str[data[1]];
			data[3]++;
		}
		data[1]++;
	}
	to_find[(data[1] - data[0])] = '\0';
	return (to_find);
}

#include <stdio.h>
int main()
{   
    char a[]= "Hello howw world how are you";
    char b[20]= "wor";

 	ft_strstr(a,b);
	printf("%s", b);
    return 0;
}
