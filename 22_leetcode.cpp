#include <iostream>
using namespace std;

void rotateArr(int arr[], int s, int k) {
  // Allocate temporary array
  int *temp = new int[s];

  // Perform rotation
  for (int i = 0; i < s; i++) {
    temp[(i + k) % s] = arr[i];
  }

  // Copy rotated array back to original array
  for (int i = 0; i < s; i++) {
    arr[i] = temp[i];
  }

  // Free the allocated memory
  delete[] temp;
}

void printArray(int arr[], int s) {
  for (int i = 0; i < s; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[20] = {11, 12, 13, 14, 15}; // Initialize with 20 elements
  int size = 5;                       // Actual number of initialized elements
  rotateArr(arr, size, 4);
  printArray(arr, size);
  return 0;
}
