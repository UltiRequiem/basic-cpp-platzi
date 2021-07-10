#include <iostream>

using namespace std;

int main() {
  int limit;
  cout << "Enter the max number: ";
  cin >> limit;

  for (int i = 1; i < limit; i++) {
    if (i % 2 == 0) {
      cout << i << endl;
    }
  }
}
