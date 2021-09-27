/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 20:10:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:30:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (n <= i)
	{
		while (n <= i)
		{
			dest[n] = '\0';
			n++;
		}
	}
	else
	{
		dest[i] = '\0';
	}
	return (dest);
}

//	#include<stdio.h>
//	int main()
//	{	
//		char a[] = "hello";
//		char b[] = "how are you";
//
//		printf("%s\n", a);
//		ft_strncpy(a, b, 5);
//		printf("%s\n", a);
//		return 0;
//	}