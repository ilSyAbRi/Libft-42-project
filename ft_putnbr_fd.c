/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 22:43:03 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/10/25 06:09:22 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		min_int;
	char	*ptr;

	min_int = 1 << ((sizeof(int) * 8) - 1);
	if (n == min_int)
	{
		ptr = ft_itoa(min_int);
		ft_putstr_fd(ptr, fd);
		free(ptr);
		ptr = NULL;
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = n * -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd((n % 10) + '0', fd);
}

int	main(void)
{
	int	n;

	n = -2147483648;
	ft_putnbr_fd(n, 1);
}
