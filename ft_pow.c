/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkubli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 16:18:09 by zkubli            #+#    #+#             */
/*   Updated: 2019/09/24 16:59:48 by zkubli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow(int base, int exp)
{
	int result;

	result = 1;
	while (exp != 0)
	{
		if ((exp & 1) == 1)
			result *= base;
		exp >>= 1;
		base *= base;
	}
	return (result);
}