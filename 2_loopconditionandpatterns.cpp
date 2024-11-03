#include <iostream>

using namespace std;

int main() {

  // int a, b;
  // cout << "Enter both the values: " << endl;
  // cin >> a >> b;
  //
  // if (a > b) {
  //   cout << "a is greater" << endl;
  // } else if (b > a) {
  //   cout << "b is greater !!" << endl;
  // }
  // Using Character for justifying its lower , upper case or numerical
  // char ch;
  // cin >> ch;
  //
  // if ((ch <= 122) && (ch >= 97)) {
  //   cout << "The Character is in small case and it is: " << ch
  //        << " The value is: " << int(ch) << endl;
  // } else if ((ch >= 65) && (ch <= 90)) {
  //   cout << "The Character is in upper case and it is: " << ch
  //        << " The value is: " << int(ch) << endl;
  // } else if ((ch >= 48) && (ch <= 57)) {
  //   cout << "The Character is in numerical and it is: " << ch
  //        << " The value is: " << int(ch) << endl;
  // } else {
  //   cout << "This is not a valid Character please try again with Upper case,
  //   "
  //           "Lower case or numerical"
  //        << endl;
  // }

  // cout << int('0') << endl << int('9') << endl;

  // While loop
  // int n;
  // cin >> n;
  //
  // int i = 1;
  // cout << "Now the loop starts !!" << endl;
  // while (i <= n) {
  //   cout << i << "\n";
  //   i++;
  // }

  // While Another question
  // int n;
  // cin >> n;
  //
  // int i = 1;
  // int sum = 0;
  //
  // while (i <= n) {
  //   sum = sum + i;
  //   i++;
  // }
  // cout << sum << endl;
  //
  //
  // Find the sum of even number from the starting point to the end point
  // int n;
  // cin >> n;
  //
  // int i = 1;
  // int sum = 0;
  //
  // while (i <= n) {
  //   if (i % 2 == 0) {
  //     sum = sum + i;
  //   }
  //   i++;
  // }
  // cout << sum << endl;
  //
  //
  // Prime or not
  // int n;
  // cin >> n;
  //
  // int i = 2;
  //
  // while (i < n) {
  //   if (n % i == 0) {
  //     cout << n << " is not Prime !!" << endl;
  //   }
  //   i++;
  // }
  //
  //
  // Patterns
  int n;
  cin >> n;
  int i = 1;
  while (i <= n) {
    int j = 1;
    while (j <= n) {
      cout << " " << i << " ";
      j++;
    }
    cout << endl;
    i++;
  }

  return 0;
}
