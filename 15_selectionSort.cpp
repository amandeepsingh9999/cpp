#include <iostream>
#include <utility>
using namespace std;

void printArray(int n, int arr[]) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void selectionSort(int n, int arr[]) {
  for (int i = 0; i < n - 1; i++) {

    for (int j = i + 1; j < n; j++) {
      if (arr[i] > arr[j]) {
        swap(arr[i], arr[j]);
      }
    }
  }
}

int main() {

  int arr[6] = {6, 4, 2, 3, 1, 5};
  selectionSort(6, arr);
  printArray(6, arr);
}
