include "LongDList.h"

struct Node{
  long num;
  Node *next;
};


class LongList{
  public:
    LongDList();
    void Prepend(long);
    long Trim();
    friend std::ostream& operator<<(std::ostream& , LongDList);
    Node *nodes;
};
