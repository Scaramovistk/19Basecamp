/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/20 07:14:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/15 07:06:10 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int     ft_strlen(char *str)
{
    int     size;

    size = 0;
    while(str[size] != '\0')
        size++;
    return (size);
}

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
	return (dest);
}

int ft_max_len(int size, char **strs, char *sep)
{
    int len;
    int row;
    row = 0;
    len = 0;

    while (row < size)
    {
        len += ft_strlen(strs[row]);
        row++;
    }
    len += (ft_strlen(sep) * size);
    return (len);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
    int lengh;
    char *nstr;
    int row;
    
    row = 0;
    lengh = ft_max_len(size, strs, sep);
    nstr = malloc(sizeof(char) * (lengh + 1));
    nstr[0] = '\0';
    while (row < size)
    {
        nstr = ft_strcat(nstr, strs[row]);
        if (row < size - 1)
            nstr = ft_strcat(nstr, sep);
        row++;
    }
    nstr[lengh] = '\0';
    return (nstr);
}

    #include <stdio.h>
    int main(void)
    {
        char *str[5];
        str[0] = "hello";
        str[1] = "world";
        str[2] = "how";
        str[3] = "are";
        str[4] = "you";

        char *nstr = ft_strjoin(5, str, "-");
        printf("%s", nstr);
        return (0);
    }