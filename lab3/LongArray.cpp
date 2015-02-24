#include <iostream>
#include "LongArray.h"
using namespace std;

LongArray::LongArray(){
  total_count = 0;
  size_array = 2;
  numbers = new long(size_array);
}

long& LongArray::operator[](int index){
  if(index > total_count || index < 0){
    long x =0;
    return x;
  }
  else return numbers[index];
}

long LongArray::Shrink(){
  return numbers[--total_count];
}

ostream& operator<<(std::ostream& out, LongArray la){
  for(int i=0; i< la.total_count; i++){
    out << la.numbers[i] << endl;
  }

  return out;
} 

void LongArray::Append(long num){
  if(total_count < size_array){
    numbers[total_count] = num;
    total_count ++;
  }
  else{
    long *temp = new long(size_array);
    for(int i=0; i <size_array; i++){
      temp[i] = numbers[i];
    }

    delete [] numbers;
    size_array *=2;
    numbers = new long (size_array);
   
    for(int i=0; i<size_array/2; i++){
      numbers[i] = temp[i];
    }
    numbers[total_count] = num;
    total_count++;
    delete [] temp;
  }
}
