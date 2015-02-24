#ifndef TENSTRINGS_H
#define TENSTRINGS_H

class TenStrings{
  public:
    TenStrings();
    char*& operator[](int); 
  private:
    char *strings[10]; 
};

#endif
