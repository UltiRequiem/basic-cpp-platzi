#include <iostream>

using namespace std;

int main() {
  int option;
  cout << "Enter one number from 0-2." << endl;
  cin >> option;
  switch (option) {
  case 1:
    cout << "You select option one." << endl;
    break;
  case 2:
    cout << "You select option two." << endl;
    break;
  default:
    cout << "Incorrect." << endl;
    break;
  }
}
