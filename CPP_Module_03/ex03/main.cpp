#include "DiamondTrap.hpp"

int main( void ) {
    
    DiamondTrap Diamond("Michael");

    Diamond.attack("Michel");
    Diamond.takeDamage(50);
    Diamond.beRepaired(20);
    Diamond.whoAmI();

    std::cout << "Energy points : " << Diamond.getEnPts()
                << "\nHit points : " << Diamond.getHitPts()
                << "\nAttack damage : " << Diamond.getAtkDmg() << std::endl;

    std::cout << "--------------------------------------------------------------" << std::endl;
    
    DiamondTrap Diamond2 = Diamond;

    Diamond.takeDamage(100);
    Diamond.attack("Michel");

    Diamond2.beRepaired(2);
    std::cout << "Energy points : " << Diamond2.getEnPts()
                << "\nHit points : " << Diamond2.getHitPts()
                << "\nAttack damage : " << Diamond.getAtkDmg() << std::endl;
    
    std::cout << "--------------------------------------------------------------" << std::endl;

    DiamondTrap *Diamond3 = new DiamondTrap("Bg");
    Diamond3->whoAmI();
    delete Diamond3;

    std::cout << "--------------------------------------------------------------" << std::endl;
}