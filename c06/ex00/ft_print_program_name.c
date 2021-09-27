/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 12:17:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/15 07:06:10 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     main(int argc, char **argv)
{
    int     i;

    i = 0;
    if (argc > 0)
        while (argv[0][i] != '\0')
        {
            write(1, &argv[0][i], 1);
            i++;
        }
        write(1, '\n', 1);
    return 0;
}