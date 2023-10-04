/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:58:26 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/04 14:01:27 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _CLAPTRAP_HPP_
# define _CLAPTRAP_HPP_

# include <iostream>
# include <string>

class ClapTrap {
	protected:
		std::string _name;
		int _hit_points;
		int _energy_points;
		int _attack_damage;
	public:
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap &copy);
		ClapTrap & operator=(const ClapTrap &copy);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string get_name(void) const;
		int get_hit_points(void) const;
		int get_energy_points(void) const;
		int get_attack_damage(void) const;
		~ClapTrap();
};

std::ostream & operator<< (std::ostream &o, const ClapTrap &c);

#endif