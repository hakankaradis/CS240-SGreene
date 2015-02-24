#include <iostream>
#include "LongDList.h"
using namespace std;

int main(){
  LongDList ll;
  ll.Prepend(2);
  ll.Prepend(3);
  ll.Prepend(4);
  ll.Append(1);
  cout << ll;

  return 0;
}
