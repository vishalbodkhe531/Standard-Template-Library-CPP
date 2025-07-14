#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec;  // the size of vector is 0

  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);
  vec.emplace_back(5);
  vec.pop_back();

  for (int val : vec) {
    cout << val << " ";
  }

  cout << "\nSize : " << vec.size();
  cout << "\nCapacity : " << vec.capacity();
  cout << "\nValue at index 2 is : " << vec.at(2);
  cout << "\nFont Value is : " << vec.front()
       << "\nBack Value is : " << vec.back();

  return 0;
}
