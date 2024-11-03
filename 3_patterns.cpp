#include <iostream>

using namespace std;

int main() {

  int n;
  cout << "Please enter a number for printing the pattern==> ";
  cin >> n;

  int i = 1;

  // This is for printing the numerical pattern
  // while (i <= n) {
  //   int j = 1;
  //   while (j <= n) {
  //     cout << " " << (n - j) + 1 << " ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }

  // This will for printing the number and increasing it in each step
  // int num = 1;
  //
  // while (i <= n) {
  //   int j = 1;
  //
  //   while (j <= n) {
  //
  //     cout << "  " << num++ << "  ";
  //     j++;
  //
  //   }
  //
  //   cout << endl;
  //   i++;
  // }
  //
  //
  // This for printing the star pattern
  // while (i <= n) {
  //   int j = 1;
  //
  //   while (j <= i) {
  //
  //     cout << " * ";
  //     j++;
  //   }
  //
  //   cout << endl;
  //   i++;
  // }
  //
  //
  //
  // This is for printing numerical patter
  // 1
  // 2  3
  // 3  4  5
  // 4  5  6  7

  // while (i <= n) {
  //   int j = 1;
  //   while (j <= i) {
  //     cout << " " << (i + j) - 1 << " ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }
  //
  //
  // This for printing the numerical pattern
  // 1
  // 2  1
  // 3  2  1
  // 4  3  2  1
  // while (i <= n) {
  //   int j = 1;
  //   while (j <= i) {
  //     cout << " " << (i - j) + 1 << " ";
  //     j++;
  //   }
  //   cout << endl;
  //   i++;
  // }
  //
  //
  // This is for printing the alphabet in increasing order
  // AAAA
  // BBBB
  // CCCC
  // DDDD
  // char ch = 65;
  // while (i <= n) {
  //   int j = 1;
  //
  //   while (j <= n) {
  //     cout << ch;
  //     j++;
  //   }
  //   ch++;
  //   cout << endl;
  //   i++;
  // }
  //
  //
  //
  // This is for printing the alphabet in columns increasing order
  // ABC
  // ABC
  // ABC
  // while (i <= n) {
  //
  //   int j = 1;
  //   char ch = 65;
  //
  //   while (j <= n) {
  //
  //     ch = 'A' + j - 1;
  //     cout << ch;
  //     j++;
  //
  //   }
  //
  //   cout << endl;
  //   i++;
  //
  // }
  //
  //
  //
  // This program is to print alphabet pattern
  // A  B  C  D
  // B  C  D  E
  // C  D  E  F
  // D  E  F  G
  // char ch;
  // while (i <= n) {
  //
  //   int j = 1;
  //   ch = 'A' + i - 1;
  //
  //   while (j <= n) {
  //
  //     char ch2 = ch;
  //     ch2 = ch2 + j - 1;
  //     cout << " " << ch2 << " ";
  //     j++;
  //   }
  //
  //   cout << endl;
  //   i++;
  // }
  //
  //
  //
  // This program for triangle alphabet pattern
  //  A
  //  B  B
  //  C  C  C
  //
  // char ch = 65;
  // while (i <= n) {
  //   int j = 1;
  //   while (j <= i) {
  //     cout << " " << ch << " ";
  //     j++;
  //   }
  //   ch++;
  //   cout << endl;
  //   i++;
  // }
  //
  //
  //
  // This is for increasing alphabet in triangular pattern
  //  A
  //  B  C
  //  D  E  F
  //
  // char ch = 65;
  // while (i <= n) {
  //   int j = 1;
  //   while (j <= i) {
  //     cout << ch;
  //     j++;
  //     ch++;
  //   }
  //   cout << endl;
  //   i++;
  // }
  //
  //
  //
  // This is for the following triangular alphabet pattern
  // A
  // B  C
  // C  D  E
  // char ch;
  // while (i <= n) {
  //
  //   int j = 1;
  //   char ch2 = 'A' + n - i;
  //   while (j <= i) {
  //
  //     cout << " " << ch2 << " ";
  //     j++;
  //     ch2++;
  //   }
  //
  //   cout << endl;
  //   i++;
  // }
  //
  //
  // This is for star pattern printing
  //    *
  //  * *
  //* * *
  // while (i <= n) {
  //
  //   int j = n - i;
  //   while (j >= 1) {
  //
  //     cout << "   ";
  //     j--;
  //   }
  //
  //   int k = 1;
  //   while (k <= i) {
  //
  //     cout << " * ";
  //     k++;
  //   }
  //
  //   int h = 2;
  //   while (h <= i) {
  //
  //     cout << " * ";
  //     h++;
  //   }
  //
  //   cout << endl;
  //   i++;
  // }
  //
  //
  //
  // This is for star pattern
  // * * * *
  // * * *
  // * *
  // *
  // while (i <= n) {
  //
  //   int j = n - i + 1;
  //   while (j >= 1) {
  //
  //     cout << " * ";
  //     j--;
  //   }
  //   cout << endl;
  //   i++;
  // }
  //
  //
  //
  //
  //
  //
  return 0;
}
