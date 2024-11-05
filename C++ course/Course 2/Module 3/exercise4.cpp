#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line

  int mid = my_string.length() / 2;
  for (int i = 0; i < mid; i++) {
    cout << my_string.at(i);
  }
  cout << endl;
  for (int j = mid; j < my_string.length(); j++) {
    cout << my_string.at(j);
  }
  cout << endl;

  //add code above this line
  
  return 0;
  
}