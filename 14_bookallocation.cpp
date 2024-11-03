#include <algorithm>
#include <iostream>
#include <iterator>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid) {
  int studentCount = 1;
  int pageSum = 0;

  for (int i = 0; i < n; i++) {
    if (pageSum + arr[i] <= mid) {
      pageSum += arr[i];
    } else {
      studentCount++;
      if (studentCount > m || arr[i] > mid) {
        return false;
      }
      pageSum = arr[i];
    }
  }
  return true;
}

int bookAllocation(int arr[], int n, int m) {
  int start = 0;
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  int end = sum;
  int ans = -1;
  int mid = start + (end - start) / 2;

  while (start <= end) {

    if (isPossible(arr, n, m, mid)) {

      end = mid - 1;
    } else {
      start = mid + 1;
    }
    mid = start + (end - start) / 2;
  }
  return ans;
}

bool isPossibleCow(int n, int arr[n], int k, int mid) {
  int cowCount = 1;
  int lastPos = arr[0];

  for (int i = 0; i < n; i++) {
    if (arr[i] - lastPos >= mid) {
      cowCount++;
      if (cowCount == k) {
        return true;
      }
      lastPos = arr[i];
    }
  }
  return false;
}

int aggresiveCow(int n, int arr[n], int k) {
  int start = 0;
  int maxi = -1;
  for (int i = 0; i < n; i++) {
    maxi = max(maxi, arr[i]);
  }
  int end = maxi;
  int ans = -1;
  int mid = (start + end) / 2;
  while (start <= end) {
    if (isPossibleCow(n, arr, k, mid)) {
      ans = mid;
      start = mid + 1;
    } else {
      end = mid - 1;
    }
    mid = (start + end) / 2;
  }
  return ans;
}

int main() {
  int arr[6] = {10, 20, 30, 40, 50, 60};
  cout << bookAllocation(arr, 6, 2) << endl;
  return 0;
}
