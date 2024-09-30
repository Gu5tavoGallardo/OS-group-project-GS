#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
int userInput;

cout << "welcome to the operating system" << endl;
while(true){
  cout << "Plaese input either a 1 to continue or 0 to end the program" << endl;
  cin >> userInput;

    // This function is so the users dont put in letters or words 
    if(cin.fail()){
      cout << " you can only put a 0 or 1" << endl;
      
    }
    // if the user puts 0 they will end the process 
    if(userInput == 0){
      cout << "You have inputed 0 the program will end now" << endl;
    exit(0);   
    }
    // if they put a 1 they can continue the process 
    else if(userInput == 1){
      cout << "you can continue with the program" << endl;
    }
          }
    return 0;
    






};