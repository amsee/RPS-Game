// Rock Paper Scissors

#include <iostream>
#include <stdlib.h>

int main() {
  
  // Generates a random number
  srand (time(NULL));
  
  // Live long and prosper
  int computer = rand() % 3 + 1;
  int user = 0;
  
  std::cout << "====================\n";
	std::cout << "rock paper scissors!\n";
	std::cout << "====================\n";

	std::cout << "1) ✊\n";
	std::cout << "2) ✋\n";
	std::cout << "3) ✌️\n";

	std::cout << "shoot!\n\n ";
  std::cin >> user;
  
  if (user == 1) {
    std::cout << "      ✊\n";
  }
  else if (user == 2) {
    std::cout << "      ✋\n";
  }
  else if (user == 3) {
    std::cout << "      ✌️\n";
  }
  else {
    std::cout << "Invalid input. Enter 1, 2 or 3 please.\n";
  }

  std::cout << "====================\n\n";
  std::cout << computer << "\n";

  if (computer == 1) {
    std::cout << "      ✊\n";
  }
  else if (computer == 2) {
    std::cout << "      ✋\n";
  }
  else if (computer == 3) {
    std::cout << "      ✌️\n";
  }

  std::cout << "====================\n\n";

// Check for winner
if (user == computer) {
  std::cout << "Tied 🤔\n\n";
}
else if (user < computer) {
  std::cout << "Computer wins 😭\n\n";
  std::cout << "====================\n";
  std::cout << "        KO\n";
  std::cout << "====================\n\n";
}
else if (user > computer) {
  std::cout << "You win!! 😹\n\n";
  std::cout << "====================\n";
  std::cout << "      YOU WIN\n";
  std::cout << "====================\n\n";
  
}

}