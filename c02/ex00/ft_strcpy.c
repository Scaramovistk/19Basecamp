/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 20:10:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/11 11:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char *ft_strcpy(char *dest, char *src)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//	#include<stdio.h>
//	int main()
//	{	
//		char a[] = "hello";
//		char b[] = "world";
//
//		printf("%s\n", a);
//		ft_strcpy(a, b);
//		printf("%s\n", a);
//		return 0;
//	}