/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 23:32:42 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/11/04 10:13:45 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_nb(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		num = num * -1;
		count++;
	}
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	size_t		count;
	long long	nb;

	count = count_nb(n);
	ptr = malloc(sizeof(char) * (count + 1));
	if (ptr == NULL)
		return (NULL);
	nb = (long long)n;
	ptr[count] = '\0';
	if (nb == 0)
		ptr[0] = '0';
	if (nb < 0)
	{
		nb = nb * -1;
		ptr[0] = '-';
	}
	while (nb != 0)
	{
		ptr[--count] = (nb % 10) + '0';
		nb = nb / 10;
	}
	return (ptr);
}
