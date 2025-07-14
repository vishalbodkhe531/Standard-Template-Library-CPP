// Different ways to create vector/initialis the vector
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec = {1, 2, 3, 4};
  for (int value : vec) {
    cout << value << " ";
  }

  cout << endl;
  vector<int> vec2(5, 10);
  for (int value : vec2) {
    cout << value << " ";
  }

  cout << endl;
  vector<int> vec3(vec2);
  for (int value : vec3) {
    cout << value + 1 << " ";
  }
  return 0;
}