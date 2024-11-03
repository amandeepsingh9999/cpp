#include <algorithm>
#include <functional>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <string>
using namespace std;
int main() {

  // Stack
  //==========================================//

  stack<string> s;
  s.push("Amandeep");
  s.push("Singh");
  s.push("Bhogal");

  cout << "Top Element==> " << s.top() << endl;

  s.pop();
  cout << "Top Element==> " << s.top() << endl;

  cout << "Size of stack==> " << s.size() << endl;
  cout << "Empty or not==> " << s.empty() << endl;

  // Queue
  //==========================================//

  queue<string> q;

  q.push("Amandeep");
  q.push("Singh");
  q.push("Bhogal");

  cout << "First Element ==> " << q.front() << endl;
  cout << "Last Element ==> " << q.back() << endl;

  q.pop();
  cout << "First Element ==> " << q.front() << endl;

  // Priority Queue
  //==========================================//

  // Max Heap
  priority_queue<int> maxi;

  // Min Heap
  priority_queue<int, vector<int>, greater<int>> mini;

  maxi.push(1);
  maxi.push(2);
  maxi.push(3);
  maxi.push(4);
  int n = maxi.size();
  for (int i = 0; i < n; i++) {
    cout << maxi.top() << " ";
    maxi.pop();
  }
  cout << endl;
  cout << "It is empty ?? " << maxi.empty() << endl;

  // Set
  //==========================================//
  set<int> s1;

  s1.insert(5);
  s1.insert(5);
  s1.insert(5);
  s1.insert(1);
  s1.insert(1);
  s1.insert(1);
  s1.insert(2);
  s1.insert(2);
  s1.insert(2);
  s1.insert(3);
  s1.insert(3);
  s1.insert(3);

  for (auto i : s1) {
    cout << i << " ";
  }
  cout << endl;

  set<int>::iterator it = s1.begin();
  it++;

  s1.erase(it);

  for (auto i : s1) {
    cout << i << " ";
  }
  cout << endl;

  cout << "5 is present or not==> " << s1.count(5) << endl;

  // Map
  //==========================================//
  map<int, string> m;

  m[1] = "Amandeep";
  m[2] = "Singh";
  m[3] = "Bhogal";

  for (auto i : m) {
    cout << i.first << " " << i.second << endl;
  }

  cout << "Finding 13 ==> " << m.count(13) << endl;

  // Algorithm
  //==========================================//

  return 0;
}
