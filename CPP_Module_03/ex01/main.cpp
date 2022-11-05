#include "ScavTrap.hpp"

int main( void ) {
    ScavTrap Scav("Billy");

    Scav.attack("Michel");
    Scav.takeDamage(50);
    Scav.beRepaired(20);

    Scav.guardGate();

    std::cout << "Energy points : " << Scav.getEnPts()
                << "\nHit points : " << Scav.getHitPts() << std::endl;

    std::cout << "--------------------------------------------------------------" << std::endl;
    
    ScavTrap Scav2 = Scav;

    Scav.takeDamage(100);
    Scav.attack("Michel");

    Scav2.beRepaired(2);
    std::cout << "Energy points : " << Scav2.getEnPts()
                << "\nHit points : " << Scav2.getHitPts() << std::endl;
    
    std::cout << "--------------------------------------------------------------" << std::endl;

    ScavTrap Scav3(Scav2);
    std::cout << "Energy points : " << Scav3.getEnPts()
                << "\nHit points : " << Scav3.getHitPts() << std::endl;

    Scav.beRepaired(8);
    std::cout << "--------------------------------------------------------------" << std::endl;

    ScavTrap Scav4;
    Scav4.attack("Michel");

    std::cout << "--------------------------------------------------------------" << std::endl;
}