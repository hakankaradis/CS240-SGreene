#ifndef LONGDLIST_H
#define LONGDLIST_H

struct Node{
  long num;
  Node *next;
  Node *prev;
};


class LongDList{
  public:
    LongDList();
    void Prepend(long);
    long Shrink();
    void Append(long);
    long Trim();
    friend std::ostream& operator<<(std::ostream& , LongDList);
    Node *head;
    Node *tail;
};


#endif
