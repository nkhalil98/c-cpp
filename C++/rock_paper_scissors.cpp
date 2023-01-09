/*
Scissors cuts Paper.
Paper covers Rock.
Rock crushes Lizard.
Lizard poisons Spock.
Spock smashes Scissors.
Scissors decapitate Lizard.
Lizard eats Paper.
Paper disproves Spock.
Spock vaporizes Rock.
(and as it always has) Rock crushes Scissors.
*/

#include <iostream>
#include <stdlib.h>

int main() {

  srand (time(NULL));
 
  int computer = rand() % 3 + 1; 
  int user = 0;

  std::cout << "====================\n";
  std::cout << "Rock paper scissors!\n";
  std::cout << "====================\n";
 
  std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";
 
  std::cout << "Shoot!\n";

  std::cin >> user;

  if (user == 1)
    std::cout << "You chose: ✊\n";
  else if (user == 2)
    std::cout << "You chose: ✋\n";
  else
    std::cout << "You chose: ✌️\n";

  if (computer == 1)
    std::cout << "Computer chose: ✊\n";
  else if (computer == 2)
    std::cout << "Computer chose: ✋\n";
  else
    std::cout << "Computer chose: ✌️\n";

  if (user == computer) {
    std::cout << "it's a tie!\n";
  }
  else if (user == 1) {
    if (computer == 2) {
      std::cout << "you lost!\n";
    }
    if (computer == 3) {
      std::cout << "you won!\n";
    }
  }
  else if (user == 2) {
    if (computer == 1) {
      std::cout << "you won!\n";
    }
    if (computer == 3) {
      std::cout << "you lost!\n";
    }
  }
  else if (user == 3) {
    if (computer == 1) {
      std::cout << "you won!\n";
    }
    if (computer == 2) {
      std::cout << "you lost!\n";
    }
  }
}
