#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;

int main(){
  int cpuNum;
  int maxNum; 
  int counter = 0;
  int userGuess;
  string difficulty;
  string Hard = "H";
  string Medium = "M";
  string Easy = "E";
  srand (time(NULL));
  bool playAgain=true;
  string playInput;
  while(playAgain==true){
  cout << "Welcome to the guessing game. Which difficulty would you like?" << endl << "Easy = E" << endl << "Medium = M" << endl << "Hard = H" << endl;
  cin >> difficulty;

 if(difficulty == "E" || difficulty == "e" || difficulty == "H" || difficulty == "h" || difficulty == "m" || difficulty == "M"){
   if(difficulty =="E"){
     cpuNum = rand() % 2 + 1;
     maxNum = 2;
  }
 if(difficulty =="M"){
  cpuNum = rand() % 10 + 1;
  maxNum = 10;
  }
if(difficulty =="H"){
  cpuNum = rand() % 100 +1;
  maxNum = 100;
  }
 }else{
  cout << "Invalid Input. Default difficulty Medium used." << endl;
  cpuNum = rand() % 10 +1;
  maxNum = 10;
}

cout << "Guess a random number between 1 and " << maxNum << endl;
cin >> userGuess;
if(userGuess == cpuNum){
  cout << "You guessed correctly, you win!" << endl;
}else{
  if(cpuNum > userGuess){
    cout << "You were " << cpuNum - userGuess << " lower than the correct number. Sorry, you lose" << endl;
  }else{
    cout << "You were " << userGuess - cpuNum << " higher than the correct number. Sorry, you lose" << endl;
  }
     }

  cout << "Would you like to play again? Y/N" << endl;
  cin >> playInput; 
  if(playInput=="N" || "n"){
    playAgain = false;
  }else if(playInput == "Y" || playInput == "y"){
  counter++;
  cout << "Round: " << counter << endl;
  }else{
    cout << "Invalid Input. Game Over." << endl;
    playAgain = false;
  }
  cout << "Thanks for playing. Game over!" << endl;
  }

}

