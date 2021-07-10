#include <iostream>

using namespace std;

int main() {
  int age;
  cout << "Enter your age: " << endl;
  cin >> age;
  if (age >= 18 && age <= 60) {
    cout << "You can vote." << endl;
  } else {
    cout << "You can't vote." << endl;
  }
}
