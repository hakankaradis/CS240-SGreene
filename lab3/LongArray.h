#ifndef LONGARRAY_H
#define LONGARRAY_H

class LongArray{
  public:
    LongArray();
    void Append(long);
    ~LongArray(){
    }
    long *numbers;
    int total_count;
    friend std::ostream& operator<<(std::ostream&, LongArray);
    long Shrink();
    long& operator[](int index);
  private:
    int size_array;
};

#endif
