#include <bits/stdc++.h>
#include <climits>
#include <iterator>
#include <string>
#include <utility>
#include <vector>
using namespace std;

void PrintVectorPair(vector<pair<int, int>> range) {
  for (int i = 0; i < size(range); i++) {
    cout << range[i].first << " " << range[i].second << endl;
  }
}

int countRange(int arr[], int size, int x, int y) {
  int counter = 0;

  for (int i = 0; i < size; i++) {
    if (arr[i] <= y && arr[i] >= x) {
      counter++;
    }
  }

  return counter;
}

int main() {

  int arr[10] = {200, 231, 300, 500, 700, 550, 650, 760, 250, 981};
  vector<pair<int, int>> range;
  int n;

  cout << "Enter Range you would like: " << endl;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;

    range.push_back({x, y});
  }

  PrintVectorPair(range);
  for (int i = 0; i < size(range); i++) {
    cout << countRange(arr, 10, range[i].first, range[i].second) << endl;
  }
  return 0;
}
