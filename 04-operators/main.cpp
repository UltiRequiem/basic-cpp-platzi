#include <iostream>

using namespace std;

int main() {
  const int a = 45;
  const int b = 30;
  const int NUMBERS[] = {24, 40, 7};

  const int sum = a + b;
  const int res = a - b;
  const int div = a / b;
  const bool mayo = a > b;

  cout << sum << endl;
  cout << res << endl;
  cout << div << endl;
  cout << mayo << endl;
  cout << sizeof(NUMBERS) << endl;
}
