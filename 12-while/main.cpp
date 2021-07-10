#include <iostream>

using namespace std;

int main() {
  while (true) {
    char response;
    cout << "Do you wanna leave the program? " << endl;
    cin >> response;

    if (response == 'y') {
      cout << "Bye" << endl;
      break;
    }
  }
}
