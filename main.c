/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:40:23 by jdutschk          #+#    #+#             */
/*   Updated: 2022/08/30 12:28:57 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int ac, char **av)
{
	int			error_code;
	t_rules		*r;

	r = malloc(sizeof(t_rules));
	error_code = ft_init_rules(ac, av, r);
	if (error_manager(error_code))
		return (1);
	if (start(r))
		return (printf("error thread\n"));
	return (0);
}
