/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 20:48:07 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/06 02:57:58 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*keep;

	keep = NULL;
	i = 0;
	while (s[i])
	{
		if ((char)c == s[i])
			keep = &s[i];
		i++;
	}
	if ((char)c == s[i])
		keep = &s[i];
	return ((char *)keep);
}
