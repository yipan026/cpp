/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yipan <yipan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 13:00:09 by yipan             #+#    #+#             */
/*   Updated: 2026/01/01 11:41:07 by yipan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>

class Harl
{
private:
	void _debug(void);
	void _info(void);
	void _warning(void);
	void _error(void);
public:
	Harl();
	void complain(std::string level);
};

#endif