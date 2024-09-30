#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
int userInput;

cout << "welcome to the operating system" << endl;
cout << "Plaese input either a 1 to continue or 0 to end the program" << endl;
cin >> userInput; 

    if(cin.fail()){
      cout << "The input does not work" << endl;
    exit(1);  
    }

    if(userInput == 0)
    cout << "You have inputed 0 the program will end now" << endl;
    exit(0);

  if else(userInput)







};