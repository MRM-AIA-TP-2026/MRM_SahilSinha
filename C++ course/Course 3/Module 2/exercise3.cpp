#include <iostream>
using namespace std;

//add function definitions below this line

int BunnyEars(int bunnies) {
  if (bunnies == 0) {
    return 0;
  }
  return 2 + BunnyEars(bunnies - 1);
}

//add function definitions above this line

int main(int argc, char** argv) {
  cout << BunnyEars(stoi(argv[1])) << endl;
  return 0;
}
