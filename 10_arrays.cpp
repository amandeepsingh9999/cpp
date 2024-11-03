#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
using namespace std;

void printArray(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void swapAlternate(int arr[], int n) {
  for (int i = 0; i < n; i += 2) {
    if (i + 1 < n) {
      swap(arr[i], arr[i + 1]);
    }
  }
}

int findUnique(int arr[], int n) {
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans = ans ^ arr[i];
  }
  return ans;
}

void intersection(int arr1[], int arr2[], int n, int m) {
  int i = 0;
  int j = 0;

  while (i < n && j < m) {
    if (arr1[i] == arr2[j]) {
      cout << arr1[i] << " ";
      i++;
      j++;
    } else if (arr1[i] < arr2[j]) {
      i++;
    } else if (arr2[j] < arr1[i]) {
      j++;
    }
  }
  cout << endl;
}

vector<vector<int>> pairSum(int arr1[], int n, int sum) {
  vector<vector<int>> ans;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      if ((arr1[i] + arr1[j]) == sum) {
        vector<int> temp;
        temp.push_back(min(arr1[i], arr1[j]));
        temp.push_back(max(arr1[i], arr1[j]));
        ans.push_back(temp);
      }
    }
  }
  sort(ans.begin(), ans.end());
  return ans;
}

int main() {

  int even[8] = {5, 2, 9, 4, 7, 6, 1, 0};
  int odd[5] = {11, 33, 9, 76, 43};
  int unique[5] = {2, 4, 7, 2, 7};
  int arr1[5] = {1, 2, 2, 3, 4};
  int arr2[5] = {1, 4, 8, 9, 11};

  cout << "This swapping for alternate is done !!" << endl;

  swapAlternate(even, 8);
  printArray(even, 8);

  cout << endl;

  cout << "This swapping for alternate is done !!" << endl;

  swapAlternate(odd, 5);
  printArray(odd, 5);

  cout << endl;

  cout << "Finding the unique !!" << endl;
  printArray(unique, 5);
  cout << findUnique(unique, 5) << endl;

  cout << "Finding the intersection !!" << endl;
  printArray(arr1, 5);
  printArray(arr2, 5);
  intersection(arr1, arr2, 5, 5);

  cout << "Finding the pairSum !!" << endl;
  // vector< vector<int> > vec = pairSum(arr1, 5, 5);
  // for (int i = 0; i < vec.size(); i++) {
  //   cout << vec[i] << " ";
  // }
  cout << endl;
  return 0;
}
