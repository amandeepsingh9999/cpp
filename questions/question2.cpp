#include <iostream>
using namespace std;

void fibonacci(int n) {

  int a = 0;
  int b = 1;
  cout << a << " " << b << " ";
  for (int i = 0; i <= n; i++) {
    int fib = a + b;
    cout << fib << " ";
    a = b;
    b = fib;
  }
}

int main() {

  int n;
  cin >> n;

  fibonacci(n);
  return 0;
}
