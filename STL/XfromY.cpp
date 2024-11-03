#include <algorithm>
#include <climits>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int MinStringFactor(const string &X, const string &Y, int S, int R) {
  int n = X.size();
  int m = Y.size();

  vector<int> dp(n + 1, INT_MAX);

  dp[0] = 0;

  string YRev = Y;
  reverse(YRev.begin(), YRev.end());

  for (int i = 0; i <= n; ++i) {
    for (int j = 0; j < i; ++j) {
      string sub = X.substr(j, i - j);
      if (Y.find(sub) != string::npos) {
        dp[i] = min(dp[i], dp[j] + S);
      }

      if (YRev.find(sub) != string::npos) {
        dp[i] = min(dp[i], dp[j] + R);
      }
    }
  }
  if (dp[n] == INT_MAX) {
    return -1;
  } else {
    return dp[n];
  }
}

int main() {

  string X, Y;
  int S, R;

  cin >> X >> Y;
  cin >> S >> R;

  int result = MinStringFactor(X, Y, S, R);

  if (result == -1) {
    cout << "Impossible" << endl;
  } else {
    cout << result << endl;
  }

  return 0;
}
