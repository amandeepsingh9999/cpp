#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int key) {
  int mid = (start + end) / 2;

  while (start <= end) {
    if (arr[mid] == key) {
      return mid;
    }
    if (arr[mid] < key) {
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = (start + end) / 2;
  }
  return -1;
}

int getPivot(int arr[], int n) {
  int start = 0;
  int end = n - 1;
  int mid = (start + end) / 2;
  while (start < end) {
    if (arr[mid] >= arr[0]) {
      start = mid + 1;
    } else {
      end = mid;
    }
    mid = (start + end) / 2;
  }

  return start;
}

// Program for finding square root of the number using binarySearch
int squareRoot(int n) {
  int start = 0;
  int end = n;
  int mid = (start + end) / 2;
  int ans = -1;

  while (start <= end) {
    if (mid * mid == n) {
      return mid;
    }
    if (n > mid * mid) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = (start + end) / 2;
  }
  return ans;
}

double morePrecision(int n, int precision, int tempSol) {
  double factor = 1;
  double ans = tempSol;

  for (int i = 0; i < precision; i++) {
    factor = factor / 10;
    for (double j = ans; j * j < n; j = j + factor) {
      ans = j;
    }
  }
  return ans;
}

int main() {
  int key;
  cout << "For binarySearch !!" << endl;
  cout << "Please enter the number==> ";
  key = 3;

  int arr[6] = {3, 8, 10, 17, 1, 2};
  int n = 6;
  int pivot = getPivot(arr, 6);

  if (arr[pivot] <= key && key <= arr[5]) {
    cout << binarySearch(arr, pivot, n - 1, key) << endl;
  } else {
    cout << binarySearch(arr, 0, pivot - 1, key) << endl;
  }

  int num;
  cout << "finding squareRoot of a number using binarySearch !!" << endl;
  cout << "Please Enter a number==> ";
  cin >> num;
  int tempSol = squareRoot(num);
  cout << tempSol << endl;
  cout << "The precise square root of " << num << " "
       << morePrecision(num, 3, tempSol) << endl;
  return 0;
}
