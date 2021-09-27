/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex02.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 13:10:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int		write;
    int     size;

	write = 0;
    size = 0;
	while(dest[size] != '\0')
        size++;
    while(src[write] != '\0')
    {   
        dest[(size + write)] = src[write];
        write++;
    }
    dest[(size + write)] = '\0';
	return (0);
}

//    #include <unistd.h>
//    #include <stdio.h>
//
//    int main (void)
//    {
//        char a[] = "Hello ";
//        char b[] = "World";
//        ft_strcat(a,b);
//        printf("%s", a);
//
//        return 0;
//    }
