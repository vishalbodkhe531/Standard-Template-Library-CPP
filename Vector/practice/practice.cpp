// #include <iostream>
// using namespace std;

// //       *
// //     * * *
// //    * * * *
// //   * * * * *
// //  * * * * * *

// int main() {

//   for (int i = 0; i < 10; i++) {
//     for (int j = i + 1; j <= 10; j++) {
//       cout << " ";
//     }

//     for (int k = 0; k <= i * 2; k++) {
//       cout << "*";
//     }
//     cout << endl;
//   }

//   return 0;
// }
#include <iostream>
using namespace std;

int main() {
  int rows = 5;

  for (int i = 0; i < rows; i++) {
    int totalChars = 2 * rows - 1;
    for (int j = 0; j < totalChars; j++) {
      if (j < rows - i - 1 || j > rows + i - 1) {
        cout << "#";
      } else {
        cout << "*";
      }
    }
    cout << endl;
  }

  return 0;
}
