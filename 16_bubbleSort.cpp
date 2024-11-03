#include <iostream>
#include <utility>
using namespace std;

void printArray(int n, int arr[]) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void bubbleSort(int n, int arr[]) {
  int temp = n - 1;
  for (int i = 0; i <= temp; i++) {

    for (int j = 0; j <= temp - i; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

int main() {
  int arr[7] = {7, 3, 4, 2, 1, 6, 5};
  bubbleSort(7, arr);
  printArray(7, arr);
}
