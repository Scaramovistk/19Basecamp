/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 19:36:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/05 08:29:45 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int     ft_strlen(char *str)
{
    int     size;

    size = 0;
    while(str[size] != '\0')
        size++;
    return (size);
}

\\    #include <stdio.h>
\\    int main(void)
\\    {
\\        char a[] = "Hello World";
\\        int c = ft_strlen(&a);
\\
\\        printf("%d", c);
\\        return 0;
\\    }