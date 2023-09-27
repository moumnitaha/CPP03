/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 18:31:34 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/27 18:54:05 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
		std::string _name;
		int _hit_points;
		int _energy_points;
		int _attack_damage;
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap & copy);
		ScavTrap & operator=( const ScavTrap & copy);
		~ScavTrap();
};
