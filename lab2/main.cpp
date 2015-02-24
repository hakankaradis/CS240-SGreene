#include <iostream>
#include "tenstrings.h"

using namespace std;

int main(){
  TenStrings strs;
  strs[2] = "Kamil";
  strs[2] = "Kamil 8-o";
  cout << strs[0]<< endl;  
  cout << strs[2] << endl;

  return 0;
}
