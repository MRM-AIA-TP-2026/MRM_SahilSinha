#include <iostream>
#include <vector>
using namespace std;

//add code below this line

bool FindTerm(string term, vector<string> vect) {
  for (int i=0; i<vect.size(); i++) {
    if (vect.at(i) == term) {
      return true;
    }
  }
  return false;
}

//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<string> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(argv[i]);
  }
  cout << boolalpha << FindTerm(x, y) << endl;
}