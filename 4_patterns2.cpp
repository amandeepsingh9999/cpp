#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Please enter the values ==> " << endl;
  cin >> n;

  int i = 1;
  // Printing the triangle pattern

  // while (rows <= n) {
  //
  //   int cols = n - rows;
  //   while (cols) {
  //     cout << "   ";
  //     cols--;
  //   }
  //
  //   int cols2 = 1;
  //   while (cols2 <= rows) {
  //     cout << " " << cols2 << " ";
  //     cols2++;
  //   }
  //
  //   int cols3 = rows - 1;
  //   while (cols3) {
  //     cout << " " << cols3 << " ";
  //     cols3--;
  //   }
  //   cout << endl;
  //   rows++;
  // }
  //
  //
  // Printing the dabbang pattern
  while (i <= n) {
    int j = n - i + 1;

    while (j) {

      cout << " " << n - j - i + 2 << " ";
      j--;
    }

    int h = 1;
    while (h <= i - 1) {
      cout << " * ";
      h++;
    }

    int k = 1;
    while (k <= i - 1) {
      cout << " * ";
      k++;
    }

    int l = n - i + 1;
    while (l) {
      cout << " " << l << " ";
      l--;
    }

    cout << endl;
    i++;
  }

  return 0;
}
