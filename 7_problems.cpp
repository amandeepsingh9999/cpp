// #include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int reverse(int num) {
  int ans = 0;

  while (num) {
    if ((ans > INT_MAX / 10) || (ans < INT_MIN / 10)) {
      return 0;
    }
    int digit = num % 10;
    ans = (ans * 10) + (digit);
    num = num / 10;
  }

  return ans;
}

string binery(int num) {
  string ans = "";

  while (num) {
    int digit = num % 2;
    ans = to_string(digit) + ans;
    num = num / 2;
  }
  return ans;
}

int baseten(int n) {
  int m = n;
  int mask = 0;
  // Edge case
  if (n == 0) {
    return 1;
  }
  while (m != 0) {
    mask = (mask << 1) | 1;
    m = m >> 1;
  }
  int ans = (~n) & mask;
  return ans;
}

bool ispoweroftwo(int n) {
  int i = 0;
  while (i <= 31) {
    if (n == pow(2, i)) {
      return true;
    }
    i++;
  }
  return false;
}

int main() {

  int n;
  cout << "Please enter a number==> ";
  cin >> n;

  // cout << "The reverse of ther number is==> " << reverse(n);
  // cout << binery(INT_MAX) << endl;
  // cout << (INT_MAX) << endl;
  if (ispoweroftwo(n)) {
    cout << "Yes it is a power of two !!" << endl;
  } else {
    cout << "Not a power of two !!" << endl;
  }
  return 0;
}
