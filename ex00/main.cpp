/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmoumni <tmoumni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 15:58:33 by tmoumni           #+#    #+#             */
/*   Updated: 2023/09/27 17:34:01 by tmoumni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap a("Taha");
    std::cout << ">>> NAME 1: " << a.get_name() << " : " << a.get_energy_points() << std::endl;
    ClapTrap b(a);
    std::cout << ">>> NAME 2: " << b.get_name() << " : " << b.get_energy_points() << std::endl;
    ClapTrap c = b;
    std::cout << ">>> NAME 3: " << c.get_name() << std::endl;
    return 0;
}
