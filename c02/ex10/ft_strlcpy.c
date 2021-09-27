/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex10.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:13:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/14 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int 	i;
	unsigned int	row;

	row = 0;
	i = 0;
	while(dest[row] != '\0')
		row++;
	if(size != 0)
	{
		while(i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';	
	}
	return(row);
}

	#include <stdio.h>
	int		main(void)
	{
		char src[] = "Source";
		char dest[] = "";
		int n;
		int c;

		n = 0;

		printf("BEFORE\n\tsrc: %s\n\tdes: %s\n\tsize: %d\n", src, dest, c);

		c = ft_strlcpy(dest, src, n);

		printf("AFTER\n\tsrc: %s\n\tdes: %s\n\tsize: %d", src, dest, c);
		return (0);
}