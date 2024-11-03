
#include <algorithm>
#include <climits>
#include <iostream>
#include <string>
#include <unordered_set>
#include <vector>

using namespace std;

int MinStringFactor(const string &X, const string &Y, int S, int R) {
  int n = X.size();
  int m = Y.size();

  vector<int> dp(n + 1, INT_MAX);
  dp[0] = 0;

  unordered_set<string> YSubstrings;

  for (int len = 1; len <= m; ++len) {
    for (int start = 0; start <= m - len; ++start) {
      YSubstrings.insert(Y.substr(start, len));
    }
  }

  string YRev = Y;
  reverse(YRev.begin(), YRev.end());
  unordered_set<string> YRevSubstrings;

  for (int len = 1; len <= m; ++len) {
    for (int start = 0; start <= m - len; ++start) {
      YRevSubstrings.insert(YRev.substr(start, len));
    }
  }

  for (int i = 1; i <= n; ++i) {
    for (int j = 0; j < i; ++j) {
      string sub = X.substr(j, i - j);
      if (YSubstrings.find(sub) != YSubstrings.end()) {
        dp[i] = min(dp[i], dp[j] + S);
      }
      if (YRevSubstrings.find(sub) != YRevSubstrings.end()) {
        dp[i] = min(dp[i], dp[j] + R);
      }
    }
  }

  return (dp[n] == INT_MAX) ? -1 : dp[n];
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
