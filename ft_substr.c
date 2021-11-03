/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoussao <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:25:20 by omoussao          #+#    #+#             */
/*   Updated: 2021/11/03 13:12:16 by omoussao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	slen;
	size_t	i;

	slen = 0;
	while (s[slen])
		slen++;
	if (start > slen)
		return (NULL);
	str = malloc(len * (len <= slen - start)
			+ (slen - start) * (len > slen - start) + 1);
	if (!str)
		return (NULL);
	i = -1;
	while (++i < slen && i < len)
		str[i] = s[start + i];
	str[i] = 0;
	return (str);
}
