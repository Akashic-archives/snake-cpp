#include <deque>
#include <iostream>
using namespace std;

int main() {
  deque<int> test;
  test.push_front(1);
  test.push_front(2);
  test.push_front(3);
  test.push_front(4);
  test.push_front(5);
  cout << test.front();
  for (int i = 0; i < test.size(); i++) {
    cout << test[i];
  }
  return 0;
}
