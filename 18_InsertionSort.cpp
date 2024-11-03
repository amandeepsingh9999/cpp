#include <iostream>
using namespace std;

void printArray(int n, int arr[]) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void insertionSort(int n, int arr[]) {
  for (int i = 1; i < n; i++) {

    int temp = arr[i];
    int j = i - 1;
    for (; j >= 0; j--) {

      if (arr[j] > temp) {
        arr[j + 1] = arr[j];
      } else {
        break;
      }
    }
    arr[j + 1] = temp;
  }
}

int main() {
  int arr[6] = {6, 7, 4, 5, 3, 2};
  insertionSort(6, arr);
  printArray(6, arr);
}
