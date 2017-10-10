#include <iostream>
#include <string>

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

//the entry point for our application
int main()
{
  bool bWantToPlayAgain = false
  do {
    PrintIntro();
    PlayGame();
    bPlayAgain = AskToPlayAgain();
  } while(bWantToPlayAgain);
 }
 
 void PrintIntro()
 {
  constexpr int WORD_LENGTH = 9;
  cout << "Welcome to Bulls and Cows, a fun word game. \n";
  cout << "Can you guess the " << WORD_LENGTH;
  cout << " letter isogram I'm thinking of?\n"
  cout << endl;
  return;
 }
 
 void PlayGame()
 {
  //loop for number of turns
  constexpr int NUMBER_OF_TURNS=5;
  for(int count = 0; count < NUMBER_OF_TURNS; count++){
    string Guess = GetGuess();
    PrintGuess(Guess);
  }
 }
 
 string GetGuess()
 {
  string Guess = "";
  getline(cin, Guess);
  return Guess;
 }
 
 void PrintGuess(string Guess)
 {
  cout << "Your guess was: " << Guess << endl;
  return;
 }
 
 bool AskToPlayAgain()
 {
  cout << "Do you want to play again? (y/n)";
  string Response = "";
  getline(cin, Response);
  return (Response[0] == 'y' || Response[0] == 'Y')
 }
