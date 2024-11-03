#include <iostream>
using namespace std;
// This program is for counting the set bits in two number
int counter(int n) {
  int count = 0;
  while (n) {
    if (n & 1) {
      count++;
    }
    n = n >> 1;
  }
  return count;
}

void fortwonumer(int a, int b) {
  cout << counter(a) << endl;
  cout << counter(b) << endl;
}

int main() {
  int a, b;
  cin >> a >> b;

  fortwonumer(a, b);
  return 0;
}
