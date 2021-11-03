/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoussao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:32:40 by omoussao          #+#    #+#             */
/*   Updated: 2021/11/03 14:56:43 by omoussao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (!(count * size))
	{
		count = 1;
		size = 1;
	}
	ptr = malloc(count * size);
	ft_bzero(ptr, count * size);
	return (ptr);
}
