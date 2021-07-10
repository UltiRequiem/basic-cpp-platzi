#include <iostream>

using namespace std;

int sum(int x, int y = 2) { return x + y; }
int res(int x, int y = 2) { return x - y; }
int mul(int x, int y = 2) { return x * y; }

int main() {
  cout << sum(3, 3) << endl;
  cout << res(3, 3) << endl;
  cout << mul(3, 3) << endl;
}
