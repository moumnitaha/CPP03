/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:58:33 by tmoumni           #+#    #+#             */
/*   Updated: 2023/10/02 11:37:08 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap me("TAHA");
    DiamondTrap me2("Moumni");
    DiamondTrap me3(me);
    std::cout << "[" << me << "]" << std::endl;
    std::cout << me.get_hit_points() << std::endl;
    std::cout << me.get_energy_points() << std::endl;
    me.attack("MOUMNI");
    std::cout << me.get_hit_points() << std::endl;
    std::cout << me.get_energy_points() << std::endl;
    me.whoAmI();
    me.highFivesGuys();
    return 0;
}
