#include <iostream>
using namespace std;

void pyaracalculator(int a, int b, char chr) {

  switch (chr) {
  case '+':
    cout << (a + b) << endl;
    break;
  case '-':
    cout << (a - b) << endl;
    break;
  case '*':
    cout << (a * b) << endl;
    break;
  case '/':
    cout << (a / b) << endl;
    break;
  case '%':
    cout << (a % b) << endl;
    break;
  default:
    cout << "Sorry please try again !!" << endl;
    break;
  }
}

void notecounter(int num) {
  int n = 1;
  switch (n) {
  case 1:
    cout << "100 notes required to form " << num << " is ==> " << num / 100
         << endl;
    num = num % 100;
    n++;
  case 2:
    cout << "50 notes required to form " << num << " is ==> " << num / 50
         << endl;
    num = num % 50;
    n++;
  case 3:
    cout << "20 notes required to form " << num << " is ==> " << num / 20
         << endl;
    num = num % 20;
    n++;
  case 4:
    cout << "1 notes required to from " << num << " is ==> " << num / 1 << endl;
    num = num % 10;
    n++;
  }
}

int main() {
  // int a, b;
  // char chr;
  // cout << "Please enter two number ==> ";
  // cin >> a >> b;
  // cout << "Please enter the operator==> ";
  // cin >> chr;
  // pyaracalculator(a, b, chr);
  //
  //
  //
  int num = 1330;
  notecounter(num);
  return 0;
}
