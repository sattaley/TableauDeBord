#include <iostream>

int main() { 
  std::cout << "*********   Menu vehicule   *********\n\n"; 
 std::cout << "1 - Multimédia\n"; 
 std::cout << "2 - téléphone\n";
 std::cout << "3 - connexions\n";
 std::cout << "4 - Personnalisation - Configuration\n\n"; 
  std::cout << "**************************************\n"; 
std::cout << "Quel est votre choix ?\n";
 int choix;
  std::cin >> choix;
  std::cout << "Vous avez fait le choix n°" << choix << std::endl;
  if (choix==1){
    std::cout << "Vous avez choisi le Multimédia\n";
}
  else if (choix==2){
    std::cout << "Vous avez choisi le téléphone\n";
  }
  else if (choix==3){
    std::cout << "Vous avez choisi les connexions\n";
  }
else if (choix==4){
    std::cout << "Vous avez choisi la Personnalisation - Configuration\n";
}
else if (choix>4){
    std::cout<<"erreur\n";
}  
}
  
