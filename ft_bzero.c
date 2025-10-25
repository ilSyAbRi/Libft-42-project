/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:05:05 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/10/19 18:48:43 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*p;

	i = 0;
	if (s == NULL)
		return ;
	p = (char *)s;
	while (i < n)
	{
		p[i] = 0;
		i++;
	}
}

/*int	main(void)
{
	int	arr[10];
	int	i;

	ft_bzero(arr, sizeof(int) * 10);
	i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
}*/
