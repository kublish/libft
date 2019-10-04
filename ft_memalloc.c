/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zkubli <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:07:22 by zkubli            #+#    #+#             */
/*   Updated: 2019/09/20 09:50:20 by zkubli           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void *memptr;

	if (!(memptr = (void *)(malloc(size))))
		return (NULL);
	while (size--)
		*((int *)memptr + size) = 0;
	return (memptr);
}
