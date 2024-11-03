#include <iostream>
using namespace std;

void arithmeticProg(int n) {
  for (int i = 0; i <= n; i++) {
    cout << (3 * i) + 7 << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;

  arithmeticProg(n);
  return 0;
}
