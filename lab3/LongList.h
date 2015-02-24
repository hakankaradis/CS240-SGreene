#ifndef LONGLIST_H
#define LONGLIST_H

struct Node{
  long num;
  Node *next;
};


class LongList{
  public:
    LongList();
    void Prepend(long);
    long Trim();
    friend std::ostream& operator<<(std::ostream& , LongList);
    Node *nodes;
};


#endif
