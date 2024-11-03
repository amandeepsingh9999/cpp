#include <iostream>
#include <utility>
using namespace std;

// Reverse an Array
void RevArray(int arr[], int s) {
  int start = 0;
  int end = s - 1;
  while (start <= end) {
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
}

// Merge Two sorted Array
void mergeTwoArray(int arr[], int s1, int arr1[], int s2, int arr3[]) {
  int i = 0, j = 0;
  int k = 0;
  while (i < s1 && j < s2) {
    if (arr[i] < arr1[j]) {
      arr3[k++] = arr[i++];
    } else {
      arr3[k++] = arr1[j++];
    }
  }

  while (i < s1) {
    arr3[k++] = arr[i++];
  }

  while (j < s2) {
    arr3[k++] = arr1[j++];
  }
}

void moveZeroes(int arr[], int s) {
  int i = 0;
  for (int j = 0; j < s; j++) {
    if (arr[j] != 0) {

      swap(arr[j], arr[i]);
      i++;
    }
  }
}

// Print an Array
void printArray(int arr[], int s) {
  for (int i = 0; i < s; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[6] = {1, 3, 5, 7, 8, 9};
  int s1 = 6;
  int arr1[3] = {2, 4, 6};
  int s2 = 3;
  int arr3[9] = {0};

  int nums[6] = {0, 1, 0, 0, 9, 13};

  // Reverse an Array
  // RevArray(arr, s1);
  // printArray(arr, s1);

  // Merge Two Array
  // mergeTwoArray(arr, s1, arr1, s2, arr3);
  // printArray(arr3, 8);

  // Move Zeroes
  moveZeroes(nums, 6);
  printArray(nums, 6);
  return 0;
}
