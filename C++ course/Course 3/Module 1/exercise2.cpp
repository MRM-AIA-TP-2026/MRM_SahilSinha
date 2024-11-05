#include <iostream>
#include <vector>
using namespace std;

//add code below this line

void GetOddsEvens(string flag, const vector<int>& numbers) {
  if (flag == "true") {
    for (int num : numbers) {
      if (num % 2 == 0) {
        cout << num << endl;
      }
    }
  } 
  else if (flag == "false") {
    for (int num : numbers) {
      if (num % 2 != 0) {
        cout << num << endl;
      }
    }
  }
}

//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<int> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(stoi(argv[i]));
  }
  GetOddsEvens(x, y);
}