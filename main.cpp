//Zack Whalen
// COP2334 202301
//replit C++
//Programming Project 4 PT 1 - runs numeric calculations and checks for invalid inputs.
#include <iostream>
#include <climits> //Needed to obtain INT_MAX for input check
using namespace std;

int main() {
  double userInt; // This is the user inputted number
  double userSquared; // n * n
  double userQuotient; // n / n
  double equation1; // (n + 3)/5
  double equation2; // [((n + 3) / 5) + ((n + 7) / 2)]
  int count = 0; // This is the counter

  cout << "Input a number, then press enter:" << endl;
  cin >> userInt; //If a character is entered, the program would fail to end. This is why I included the check below.

  while (cin.fail()) { //cin fails when a non-integer is entered into an int variable.
        cin.clear(); // clears and fixes cin
        cin.ignore(INT_MAX, '\n'); // ignores previous invalid input
        cout << "\nInvalid input." << endl;
        cout << "Please input a number, then press enter:" << endl;
        cin >> userInt;
    }
  
  while (userInt != -1 && i == 0) { //This loop will close if -1 is inputted

    count = count + 1;
    userSquared = userInt * userInt;
    equation1 = (userInt + 3)/5;
    equation2 = equation1 + ((userInt + 7)/2);

    if (userInt == 0) { //This is to prevent getting nan when dividing by zero.
      userQuotient = 0; 
    }
    else {
      userQuotient = userInt / userInt;
   }
  
    cout << "\nYou entered: " << userInt << endl;
    cout << userInt << " x " << userInt << " = " << userSquared << endl;
    cout << userInt << " / " << userInt << " = " << userQuotient << endl;
    cout << "(" << userInt << " + 3) / 5 = " << equation1 << endl;
    cout << "[((" << userInt << " + 3) / 5) + ((" << userInt << " + 7) / 2)] = " << equation2 << endl;
    cout << "\nPlease enter another number, or type -1 to end the program:" << endl;
    cin >> userInt;

    while (cin.fail()) {
        cin.clear(); // clears and fixes cin
        cin.ignore(INT_MAX, '\n'); // ignores previous invalid input
        cout << "\nInvalid input." << endl;
        cout << "Please input a number, then press enter:" << endl;
        cin >> userInt;
    }
  }
  
  cout << "\n" << count << " numbers were entered."<< endl; //Ouputs counter value when the loop closes

  return 0;
}