#include <iostream>

int main() {

  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int ans1, ans2, ans3, ans4;

  std::cout << "The Sorting Hat Quiz!\n";

  bool fin = true;

  while (fin) {
  std::cout << "Q1) When I'm dead, I want people to remember me as: \n\n";

  std::cout << "1) The Good\n";
  std::cout << "2) The Great\n";
  std::cout << "3) The Wise\n";
  std::cout << "4) The Bold\n";
  
  std::cin >> ans1;
  
    switch (ans1){
    case 1:
      hufflepuff += 1;
      fin = false;
      break;
    case 2:
      slytherin += 1;
      fin = false;
      break;
    case 3:
      ravenclaw += 1;
      fin = false;
      break;
    case 4:
      gryffindor += 1;
      fin = false;
      break;
    default:
      std::cout << "Please enter a number between 1 and 4!\n";
      break;
  }
}

fin = true;

while (fin) {

  std::cout << "Q2) Dawn or Dusk?\n\n";

  std::cout << "1) Dawn\n";
  std::cout << "2) Dusk\n";

  std::cin >> ans2;

  if (ans2 == 1){
    gryffindor += 1;
    ravenclaw += 1;
    fin = false;
  } else if (ans2 == 2) {
    hufflepuff += 1;
    slytherin += 1;
    fin = false;
  } else {
    std::cout << "Please enter either 1 or 2!\n";
  }
}

fin = true;

while (fin) {
  
  std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";

  std::cout << "1) The violin\n";
  std::cout << "2) The trumpet\n";
  std::cout << "3) The piano\n";
  std::cout << "4) The drum\n";

  std::cin >> ans3;

  switch (ans3) {
    case 1:
      slytherin += 1;
      fin = false;
      break;
    case 2:
      hufflepuff += 1;
      fin = false;
      break;
    case 3:
      ravenclaw += 1;
      fin = false;
      break;
    case 4:
      gryffindor += 1;
      fin = false;
      break;
    default:
      std::cout << "Pleae enter a number between 1 and 4!\n";
  }
}

  fin = true;

  while (fin) {
    
    std::cout << "Q4) Which road tempts you most?\n\n";

    std::cout << "1) The wide, sunny grassy lane\n";
    std::cout << "2) The narrow, dark, lantern-lit alley\n";
    std::cout << "3) The twisting, leaf-strewn path through the woods\n";
    std::cout << "4) The cobbled street lined (ancient buildings)\n";

    std::cin >> ans4;

    switch (ans4) {
      case 1:
        hufflepuff += 1;
        fin = false;
        break;
      case 2:
        slytherin += 1;
        fin = false;
        break;
      case 3:
        gryffindor += 1;
        fin = false;
        break;
      case 4:
        ravenclaw += 1;
        fin = false;
        break;
      default:
        std::cout << "Please enter a number between 1 and 4!\n";
    }
  }

  int max = 0;
  std::string house;

  if (gryffindor > max) {
    max = gryffindor;
    house = "Gryffindor";
  }
  if (hufflepuff > max) {
    max = hufflepuff;
    house = "Hufflepuff";
  }
  if (ravenclaw > max) {
    max = ravenclaw;
    house = "Ravenclaw";
  }
  if (slytherin > max) {
    max = slytherin;
    house = "Slytherin";
  }

std::cout << "You will be placed in " << house << "!\n";
}