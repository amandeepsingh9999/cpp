#include <bits/stdc++.h>
#include <iostream>

using namespace std;

void printArray(int n, int arr[]) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {

  int n;
  cout << "Enter the length of arrays" << endl;
  cin >> n;
  int arr[10] = {};
  cout << "Enter array elements" << endl;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  printArray(n, arr);
  return 0;
}
