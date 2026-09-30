/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaavedr <ssaavedr@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:45:32 by ssaavedr          #+#    #+#             */
/*   Updated: 2026/09/30 13:52:14 by ssaavedr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(void)
{
	ft_is_negative(0);
	ft_putchar('\n');
	return (0);
}