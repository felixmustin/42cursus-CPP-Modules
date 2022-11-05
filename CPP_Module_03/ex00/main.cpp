#include "ClapTrap.hpp"

int main( void ) {
    ClapTrap Clap("Bob");

    Clap.attack("Michel");
    Clap.takeDamage(5);
    Clap.beRepaired(2);

    std::cout << "Energy points : " << Clap.getEnPts()
                << "\nHit points : " << Clap.getHitPts() << std::endl;

    std::cout << "--------------------------------------------------------------" << std::endl;

    ClapTrap Clap2 = Clap;

    Clap.takeDamage(8);
    Clap.attack("Michel");

    Clap2.beRepaired(2);
    std::cout << "Energy points : " << Clap2.getEnPts()
                << "\nHit points : " << Clap2.getHitPts() << std::endl;
    
    std::cout << "--------------------------------------------------------------" << std::endl;

    ClapTrap Clap3(Clap);

    Clap.beRepaired(8);

    std::cout << "--------------------------------------------------------------" << std::endl;

    ClapTrap Clap4;
    Clap4.attack("Michel");

    std::cout << "--------------------------------------------------------------" << std::endl;
}