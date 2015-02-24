#include <iostream>
#include "LongArray.h"
#include "LongList.h"

using namespace std;

int main(){
  LongArray la;
  la.Append(2);
  la.Append(3);
  la.Append(4);
  cout <<la;
  cout << endl;
  cout << la.Shrink();
  cout << endl;
  la.Append(5);
  cout << la;

  cout <<"---"<<endl;
  cout <<la[1] << endl;
  cout << la[45] << endl;
  cout << "----"<<endl;
  LongList ll;
  ll.Prepend(2);
  ll.Prepend(3);
  ll.Prepend(4);
 
  cout << ll;


  ll.Trim();
  cout << ll;

ll.Trim();
  cout << ll;

ll.Trim();
  cout << ll;

cout << ll.Trim();
  return 0;
}

