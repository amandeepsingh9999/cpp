#include <array>
#include <deque>
#include <iostream>
#include <list>
#include <vector>
using namespace std;

int main() {
  // Array
  //==================================//
  array<int, 4> a = {1, 2, 3, 4};
  int size = a.size();
  cout << "All Element are==> ";
  for (int i = 0; i < size; i++) {
    cout << a[i] << " ";
  }
  cout << endl;

  cout << "Element at 2nd Index==> " << a.at(2) << endl;
  cout << "Empty or not ==> " << a.empty() << endl;
  cout << "Front Element of array==> " << a.front() << endl;
  cout << "Back Element of array==> " << a.back() << endl;

  // Vector
  //==================================//
  vector<int> v;
  vector<int> v1(5, 1);
  cout << "capacity==> " << v.capacity() << endl;

  v.push_back(1);
  cout << "capacity==> " << v.capacity() << endl;

  v.push_back(2);
  cout << "capacity==> " << v.capacity() << endl;

  v.push_back(3);
  cout << "capacity==> " << v.capacity() << endl;

  v.push_back(4);
  cout << "capacity==> " << v.capacity() << endl;

  v.push_back(5);
  cout << "capacity==> " << v.capacity() << endl;

  cout << "size==> " << v.size() << endl;

  cout << "Element at 2nd Index==> " << v.at(2) << endl;

  cout << "Front ==> " << v.front() << endl;
  cout << "End ==> " << v.back() << endl;

  cout << "Before Pop !" << endl;
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;
  v.pop_back();
  cout << "After Pop !" << endl;

  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << " ";
  }
  cout << endl;

  // Dequeque
  //==================================//
  deque<int> d;
  d.push_back(1);
  d.push_front(2);
  for (int i : d) {
    cout << i << " ";
  }
  cout << endl;

  cout << "Print first index Element==> " << d.at(1) << endl;

  d.pop_front();
  d.push_back(2);
  d.push_back(3);
  d.push_back(4);
  d.push_back(5);
  d.push_back(6);

  cout << "Front ==> " << d.front() << endl;
  cout << "End ==> " << d.back() << endl;

  cout << "Before erase !" << d.size() << endl;
  d.erase(d.begin(), d.begin() + 1);

  cout << "After erase !" << d.size() << endl;

  for (int i : d) {
    cout << i << " ";
  }
  cout << endl;

  // List
  //==================================//
  list<int> l;
  list<int> l1(l);
  list<int> l2(5, 100);
  cout << "L2 !!";
  for (int i : l2) {
    cout << i << " ";
  }
  cout << endl;

  l.push_back(2);
  l.push_front(1);

  cout << "Before erase !!" << endl;
  for (int i : l) {
    cout << i << " ";
  }
  cout << endl;

  l.erase(l.begin());

  cout << "After erase !!" << endl;
  for (int i : l) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}
