/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprime.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkubli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 16:53:00 by zkubli            #+#    #+#             */
/*   Updated: 2019/09/24 16:57:17 by zkubli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprime(int a)
{
	int i;

	if (a % 2 == 0)
		return (0);
	i = 3;
	while (a % i != 0)
		if (2 * i > a)
			return (1);
		else
			i += 2;
	return (0);
}
