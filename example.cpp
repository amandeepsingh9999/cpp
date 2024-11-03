#include <iostream>
using namespace std;

int main() {

  int num;
  cin >> num;

  if (num & 1) {
    cout << "The number is odd !!" << endl;
  } else {
    cout << "The number is even !!" << endl;
  }

  cout << (num & 1) << endl;

  return 0;
}
