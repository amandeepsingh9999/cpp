#include <iostream>
using namespace std;

int main() {
  int arr[5] = {1, 2, 3, 5, 6};
  int brr[5] = {2, 4, 7, 9, 8};
  int crr[5] = {0};

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (arr[i] == brr[j]) {
        int k = 0;
        crr[k] = arr[i];
        k++;
      }
    }
  }
  cout << "The intersection of those two arrays are==> " << endl;
  for (int i = 0; i < 5; i++) {
    cout << crr[i] << endl;
  }
  return 0;
}
