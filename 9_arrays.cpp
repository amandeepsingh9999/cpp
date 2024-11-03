#include <iostream>
using namespace std;

void PrintArray(int n, int arr[n]) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "Printing done !!" << endl;
}

int maximum(int n, int arr[n]) {
  int max = arr[0];

  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  return max;
}

int reversearray(int n, int arr) {
  int start, end;
  for (int i = 0; i < n / 2; i++) {
  }
}
int main() {
  int n;
  cin >> n;

  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  // PrintAray(n, arr);
  // cout << sizeof(arr) / sizeof(int);
  //
  //
  //
  //
  // Finding the maximum and minimum of array
  // int max = maximum(n, arr);
  // cout << max;

  return 0;
}
