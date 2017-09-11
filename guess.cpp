#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
int cpuNum;
int userGuess; 
srand (time(NULL));
cpuNum = rand() % 10 +1; 
cout << "Guess a random number between 1 and 10" << cpuNum << endl;
cin >> userGuess;
if(userGuess == cpuNum){
  cout << "You guessed correctly, you win!" << endl;
}else{
  if(cpuNum > userGuess){
    cout << "You were off by " << cpuNum - userGuess << " Sorry, you lose" << endl;
  }else{
    cout << "You were off by " << userGuess - cpuNum << " Sorry, you lose" << endl;
  }
     }
}
