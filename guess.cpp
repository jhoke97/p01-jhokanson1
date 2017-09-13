#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
  int cpuNum;
  int userGuess;
  string difficulty;
  string Hard = "H";
  string Medium = "M";
  string Easy = "E";
  int maxNum;
  srand (time(NULL));
  bool playAgain=true;
  string playInput;
  while(playAgain==true){
  cout << "Welcome to the guessing game. Which difficulty would you like?" << endl << "Easy = E" << endl << "Medium = M" << endl << "Hard = H" << endl;
cin >> difficulty;
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
  if(playInput=="N"){
    playAgain = false;
  }
}
}
