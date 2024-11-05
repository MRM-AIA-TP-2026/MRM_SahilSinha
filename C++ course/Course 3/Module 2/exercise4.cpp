#include <iostream>
using namespace std;

//add function definitions below this line

string ReverseString(string str) {
  if (str.length() <= 1) {
    return str;
  }
  return str.back() + ReverseString(str.substr(0, str.length() - 1));
}

//add function definitions above this line

int main(int argc, char** argv) {
  cout << ReverseString(argv[1]) << endl;
  return 0;
}
