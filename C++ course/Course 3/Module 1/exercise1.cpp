#include <iostream>
#include <vector>
using namespace std;

//add code below this line

double GetAvg(double n1, double n2)
{
  return((n1+n2)/2.0);
}

//add code above this line

int main(int argc, char** argv) {
  try {
    double x = stod(argv[1]);
    double y = stod(argv[2]);
    cout << GetAvg(x, y) << endl;
  }
  catch (invalid_argument& e) {
    cout << "One or more invalid arguments." << endl;
  }
  return 0;
}