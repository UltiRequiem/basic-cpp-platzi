#include <iostream>

using namespace std;

int main() {
  int list[] = {1, 20, 25};
  int limit = sizeof(list) / sizeof(list[0]);
  for (int i = 0; i < limit; i++) {
    cout << list[i] << endl;
  }
}
