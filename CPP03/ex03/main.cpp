
#include "DiamondTrap.hpp"

int main() {
  DiamondTrap ClassA("Name");

  std::cout << "I am " << ClassA.getName() << std::endl
            << "HitPoints: " << ClassA.getHitPoints() << std::endl
            << "EnergyPoints: " << ClassA.getEnergyPoints() << std::endl
            << "AttackDamage: " << ClassA.getAttackDamage() << std::endl;
  ClassA.attack("Pigeon");
  ClassA.whoAmI();
  return 0;
}