// The simple game of "rock, paper, scissors, lizard, Spock" (from the Big Bang Theory).  "Scissors cuts paper. Paper covers rock. Rock crushes lizard. Lizard poisons Spock. Spock smashes scissors. Scissors decapitates lizard. Lizard eats paper. Paper disproves Spock. Spock vaporizes rock. Rock crushes scissors."

#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

  srand (time(NULL));

  int comp = rand() % 3 + 1;

  int user = 0;
  bool shot = true;

  while(shot) {

  cout << "====================\n";
  cout << "rock paper scissors!\n";
  cout << "====================\n";

  cout << "1) ✊\n";
  cout << "2) ✋\n";
  cout << "3) ✂️\n";
  cout << "4) 🦎\n";
  cout << "5) 🖖\n";

  cout << "shoot!\n";

  cin >> user;

    if (user >= 1 && user <= 5) {
      
      if (user == 1 && comp == 1){
          cout << "Rock Equals Rock: It's a Draw.\n";
          shot = false;
      }
      else if (user == 1 && comp == 2){
        cout << "Paper Covers Rock: The Computer Wins.\n";
        shot = false;
      }
      else if (user == 1 && comp == 3){
        cout << "Rock Crushes Scissors: You Win!\n";
        shot = false;
      }
      else if (user == 1 && comp == 4){
        cout << "Rock Crushes Lizard: You Win!\n";
        shot = false;
      }
      else if (user == 1 && comp == 5){
        cout << "Spock vaporizes rock: The Computer Wins.\n";
        shot = false;
      }
      else if (user == 2 && comp == 1){
        cout << "Paper Covers Rock: You Win!\n";
        shot = false;
      }
      else if (user == 2 && comp == 2){
          cout << "Paper Equals Paper: It's a Draw.\n";
          shot = false;
      }
      else if (user == 2 && comp == 3){
        cout << "Scissors Cuts Paper: The Computer Wins.\n";
        shot = false;
      }
      else if (user == 2 && comp == 4){
        cout << "Lizard Eats Paper: The Computer Wins.\n";
        shot = false;
      }
      else if (user == 2 && comp == 5){
        cout << "Paper Disproves Spock: You Win!\n";
        shot = false;
      }
      else if (user == 3 && comp == 1){
        cout << "Rock Crushes Scissors: The Computer Wins.\n";
        shot = false;
      }
      else if (user == 3 && comp == 2){
        cout << "Scissors Cuts Paper: You Win!\n";
        shot = false;
      }
      else if (user == 3 && comp == 3){
          cout << "Scissors Equals Scissors: It's a Draw.\n";
          shot = false;
      }
      else if (user == 3 && comp == 4){
        cout << "Scissors Decapitates Lizard: You Win!\n";
        shot = false;
      }
      else if (user == 3 && comp == 5){
        cout << "Spock Smashes Scissors: The Computer Wins.\n";
        shot = false;
      }
      else if (user == 4 && comp == 1){
        cout << "Rock Crushes Lizard: The Computer Wins.\n";
        shot = false;
      }
      else if (user == 4 && comp == 2){
        cout << "Lizard Eats Paper: You Win!\n";
        shot = false;
      }
      else if (user == 4 && comp == 3){
        cout << "Scissors Decapitates Lizard: The Computer Wins.\n";
        shot = false;
      }
      else if (user == 4 && comp == 4){
          cout << "Lizard Equals Lizard: It's a Draw.\n";
          shot = false;
      }
      else if (user == 4 && comp == 5){
        cout << "Lizard Poisons Spock: You Win!\n";
        shot = false;
      }
      else if (user == 5 && comp == 1){
        cout << "Spock Vaporizes Rock: You Win!\n";
        shot = false;
      }
      else if (user == 5 && comp == 2){
        cout << "Paper Disproves Spock: The Computer Wins!\n";
        shot = false;
      }
      else if (user == 5 && comp == 3){
        cout << "Spock Smashes Scissors: You Win!\n";
        shot = false;
      }
      else if (user == 5 && comp == 4){
        cout << "Lizard Poisons Spock: The Computer Wins\n";
        shot = false;
      }
      else if (user == 5 && comp == 5){
          cout << "Spock Equals Spock: It's a Draw!\n";
          shot = false;
      }
    } else {
      cout <<"Please enter a number between 1 and 3!\n";
      shot = false;
    }
  }
}










