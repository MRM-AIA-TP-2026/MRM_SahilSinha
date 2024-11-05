#include <iostream>
#include <vector>
using namespace std;

//add code below this line

bool IsPalindrome(string word)
{
  int flag=1, n=word.length();
  for(int i=0; i<n/2;i++)
  {
    if(word[i]!=word[n-1-i])
    {flag=0; break;}
  }
  if(flag==1){return true;}
  else{return false;}
}

//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}