#include "FragTrap.hpp"

int main( void ) {
    FragTrap Frag("Gilles");

    Frag.attack("Michel");
    Frag.takeDamage(50);
    Frag.beRepaired(20);

    Frag.highFivesGuys();

    std::cout << "Energy points : " << Frag.getEnPts()
                << "\nHit points : " << Frag.getHitPts() << std::endl;

    std::cout << "--------------------------------------------------------------" << std::endl;
    
    FragTrap Frag2 = Frag;

    Frag.takeDamage(100);
    Frag.attack("Michel");

    Frag2.beRepaired(2);
    std::cout << "Energy points : " << Frag2.getEnPts()
                << "\nHit points : " << Frag2.getHitPts() << std::endl;
    
    std::cout << "--------------------------------------------------------------" << std::endl;
}