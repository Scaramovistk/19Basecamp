/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/09 20:58:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int		n;

	n = 0;
	while (s1[n] != '\0' || s2[n] != '\0')
	{
		if (s1[n] != s2[n])
			return (s1[n] - s2[n]);
		n++;
	}
	return (0);
}

//    int main (void)
//    {
//
//        char a[] = "Hello World";
//        char b[] = "Hello How Are You";
//        int c = ft_strcmp(a,b);
//        printf("%d", c);
//
//        return 0;
//    }
