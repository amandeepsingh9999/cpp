#include <iostream>
using namespace std;

int main() {

  // Bitwise operator
  // int a = 4;
  // int b = 6;

  cout << "a & b: " << (4 & 6) << endl; // For AND operation
  cout << "a | b: " << (4 | 6) << endl; // for OR operation
  cout << "~ a: " << ~4 << endl;        // for NEGATION operation
  cout << "a ^ b: " << (4 ^ 6) << endl; // for XOR operation

  // For left and right shift operator
  cout << (17 >> 1) << endl;
  cout << (17 >> 2) << endl;
  cout << (19 << 1) << endl;
  cout << (19 << 2) << endl;

  // Post and pre increment and decrement
  // post increment ==> i++;
  // pre increment ==> ++i;
  // post decrement ==> i--;
  // pre decrement ==> --i;

  // Question - 1
  // int i, j = 1;
  // i = 10;
  // if (++i) {
  //   cout << j;
  // } else {
  //   cout << ++j;
  // }
  //
  // Question - 2
  // int i = 1;
  // int j = 2;
  // if (i-- > 0 && ++j > 2) {
  //   cout << "Stage 1 - inside if" << endl;
  // } else {
  //   cout << "Stage 2 - inside else" << endl;
  // }
  //
  // Question - 3
  // int i = 3;
  // cout << 25 * (++i) << endl;
  //
  //------------------------------------------------------------
  // For loop
  int n;
  cout << "Enter a value==> ";
  cin >> n;
  //
  // for (int i = 1; i <= n; i++) {
  //   cout << i << endl;
  // }
  //
  // Fibonacci
  // int a = 0;
  // int b = 1;
  // cout << a << " " << b << "";
  // for (int i = 1; i <= n; i++) {
  //
  //   int nextNumber = a + b;
  //   cout << nextNumber << " ";
  //   a = b;
  //   b = nextNumber;
  // }
  //
  //
  // Prime number
  // bool bl = true;
  // for (int i = 2; i < n; i++) {
  //   if (n % i == 0) {
  //     bl = false;
  //     break;
  //   }
  // }
  // if (bl == true) {
  //   cout << "This number is a Prime Number !!" << endl;
  // } else {
  //   cout << "This Number is not a Prime Number !!" << endl;
  // }
  //
  //
  // Leet code Question - 1
  // int i = n;
  // int sum = 0;
  // int mul = 1;
  // while (i) {
  //   // int sum = 0;
  //   mul = mul * (i % 10);
  //   sum = sum + i % 10;
  //   i = i / 10;
  // }
  // cout << sum << endl;
  // cout << mul << endl;

  // -------------------------------------------
  // Leet code Question - 2
  // int temp = n;
  // int count = 0;
  // while (temp) {
  //   if (temp & 1) {
  //     count++;
  //   }
  //   temp = temp >> 1;
  // }
  //
  // cout << "The number of one's in " << n << " in are " << count << endl;
  //
  //
  // -------------------------------------------------
  // leet code Question - 3
  //
  // int temp = n;
  // int rev = 0;
  // while (temp) {
  //
  //   rev = (rev * 10) + (temp % 10);
  //   temp = temp / 10;
  // }
  //
  // cout << rev;
  //
  //
  // -------------------------------------------------
  // leet code Question - 4
  // convert decimal to binary number system
  int temp = n;
  int binary = 0;
  while (temp) {

    binary = (binary * 10) + (temp % 2);
    temp = temp / 2;
  }
  cout << binary << endl;
  return 0;
}
