/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_manager.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 12:35:13 by jdutschk          #+#    #+#             */
/*   Updated: 2022/08/29 17:24:43 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	error_manager(int error)
{
	if (error == 1)
		return (printf("At least one wrong argument\n"));
	if (error == 2)
		return (printf("Fatal error when intializing mutex\n"));
	return (error);
}
