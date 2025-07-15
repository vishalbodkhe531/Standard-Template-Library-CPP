// erase // insert // clear // empty
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

  vec.erase(vec.begin() + 1);

  for (int value : vec) {
    cout << value << " ";
  }

  vec.erase(vec.begin() + 1, vec.begin() + 3);  // We can also give range

  cout << endl;

  for (int value : vec) {
    cout << value << " ";
  }

  vec.insert(vec.begin() + 1, 100);
  cout << endl;
  for (int value : vec) {
    cout << value << " ";
  }

  vec.clear();  // size is 0 but capasity still same
  cout<<"\nis empty : "<<vec.empty();  // to check vector is empty
  cout << "\n" << vec.size();
  cout << "\n" << vec.capacity();

  return 0;
}