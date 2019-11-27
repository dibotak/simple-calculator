#include <iostream>
using namespace std;

int main() {
  int a1;
  int a2;
  int op;

  //description
  cout << "Simple Calculator" << '\n';
  cout << "--------------------- \n";
  cout << "Operation: \n";
  cout << "1. Plus [+] \n";
  cout << "2. Minus [-] \n";
  cout << "3. Multiple [x] \n";
  cout << "4. Divide [/] \n";
  cout << "--------------------- \n";

  //input
  cout << "First number: ";
  cin >> a1;

  cout << "Operation [1/2/3/4]: ";
  cin >> op;

  cout << "Second number: ";
  cin >> a2;

  // Logic
  int equals;

  if (op == 1) {
    equals = (a1 + a2);
  } else if (op == 2) {
    equals = (a1 - a2);
  } else if (op == 3) {
    equals = (a1 * a2);
  } else if (op == 4) {
    equals = (a1 / a2);
  }

  //Equals with check
  if (op != 1 and op != 2 && op != 3 && op != 4){
    cout << "There is something wrong!" << endl;
  } else {
    cout << "Equals: " << equals << endl;
  }


  return 0;
}
