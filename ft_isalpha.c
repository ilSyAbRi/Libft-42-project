/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilsyabri <ilsyabri@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 14:25:27 by ilsyabri          #+#    #+#             */
/*   Updated: 2025/10/22 21:26:27 by ilsyabri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*int	main(void)
{
	int	c;

	printf("Type something (Ctrl+D to end on Linux/Mac, Ctrl+Z on Windows):\n");
	while ((c = getchar()) != EOF) // read character until EOF
	{
		if (printf("%d", ft_isalpha(c)))
			printf("%c is a letter\n", c);
		else
			printf("%c is NOT a letter\n", c);
	}
	printf("End of input reached (EOF)\n");
	return (0);
}*/
