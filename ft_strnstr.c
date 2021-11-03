/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoussao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 21:29:37 by omoussao          #+#    #+#             */
/*   Updated: 2021/11/03 11:06:07 by omoussao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	size_t	i;

	if (len == 0)
		return (NULL);
	i = -1;
	while (++i < len && n[i])
		if (h[i] != n[i])
			return (ft_strnstr(h + 1, n, len - 1));
	return ((char *)h);
}
