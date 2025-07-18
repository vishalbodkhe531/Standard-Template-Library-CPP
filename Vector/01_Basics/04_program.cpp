// Iteraters
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec = {1, 2, 3, 4, 5};
  //   don't neet to use this because of auto 
  //   vector<int>::iterator it;
  //   vector<int>::reverse_iterator it2;

  for (auto it = vec.begin(); it != vec.end(); it++) {
    cout << *it << " ";
  }

  cout << endl << endl;

  for (auto it2 = vec.rbegin(); it2 != vec.rend(); it2++) {
    cout << *it2 << " ";
  }

  return 0;
}