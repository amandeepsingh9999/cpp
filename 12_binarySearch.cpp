#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int key) {

  int ans, start = 0;
  int end = n - 1;
  int mid = (start + end) / 2;

  while (start <= end) {
    if (arr[mid] == key) {
      ans = mid;
      end = mid - 1;
    } else if (key > arr[mid]) {
      start = mid + 1;
    } else if (key < arr[mid]) {
      end = mid - 1;
    }
    mid = (start + end) / 2;
  }

  return ans;
}

int lastOccurence(int arr[], int n, int key) {

  int ans, start = 0;
  int end = n - 1;
  int mid = (start + end) / 2;

  while (start <= end) {
    if (arr[mid] == key) {
      ans = mid;
      start = mid + 1;
    } else if (key > arr[mid]) {
      start = mid + 1;
    } else if (key < arr[mid]) {
      end = mid - 1;
    }
    mid = (start + end) / 2;
  }

  return ans;
}

int peakIndex(int arr[], int n) {
  int start = 0;
  int end = n - 1;

  int mid = (start + end) / 2;

  while (start < end) {
    if (arr[mid] < arr[mid + 1]) {
      start = mid + 1;
    } else {
      end = mid;
    }
    mid = (start + end) / 2;
  }
  return start;
}

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int even[6] = {2, 4, 6, 6, 6, 8};
  int arr[5] = {0, 1, 2, 1, 0};
  cout << "Printing the array !!" << endl;
  printArray(even, 6);

  int firstccurence = firstOccurence(even, 6, 6);
  cout << "The first Occurence 0f 6 is==> " << firstccurence << endl;

  int lastccurence = lastOccurence(even, 6, 6);
  cout << "The first Occurence 0f 6 is==> " << lastccurence << endl;

  int peak = peakIndex(arr, 5);
  cout << "The Index which is peak is==> " << peak << endl;
  return 0;
}
