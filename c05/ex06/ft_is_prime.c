/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex06                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gscarama <gscarama@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/14 10:24:42 by gscarama          #+#    #+#             */
/*   Updated: 2021/09/14 21:26:10 by gscarama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int		p;
	int		half;
	int		check;

	p = 2;
	check = 1;
	half = nb / 2;
	if (nb <= 1)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	while (p <= half)
	{
		if (nb % p == 0)
		{
			check = 0;
			break ;
		}
		p++;
	}
	if (check == 1)
		return (1);
	return (0);
}

//    #include <stdio.h>
//    int main(void)
//   {
//
//        int c = ft_is_prime(4);
//        printf("%d", c);
//        return 0;
//    }