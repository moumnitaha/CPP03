/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:24:48 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/04 14:01:19 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONDTRAP_HPP_
# define _DIAMONDTRAP_HPP_

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap  : public ScavTrap, public FragTrap {
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap & copy);
		DiamondTrap & operator=(const DiamondTrap & copy);
		~DiamondTrap();
		void attack(const std::string &target);
		void whoAmI();
};

#endif