/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 18:24:48 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/30 17:38:14 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _DIAMONDTRAP_H_
# define _DIAMONDTRAP_H_

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