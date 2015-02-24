#include "tenstrings.h"
#include <iostream>
using namespace std;

TenStrings::TenStrings(){
  int i=0;
  
  for(; i<10; i++){
    strings[i] = new char(75);
  }
  strings[0] = "First String\0";
  strings[1] = "Second String\0";
  strings[2] = "Third String\0";
  strings[3] = "Fourth String\0";
  strings[4] = "Fifth String\0";
  strings[5] = "Sixth String\0";
  strings[6] = "Seventh String\0";
  strings[7] = "Eighth String\0";
  strings[8] = "Nineth String\0";
  strings[9] = "Tenth String\0";
}
 
char*& TenStrings::operator[](int index){
  if(index<0 || index>9){
    strings[index] = "Undefined";
    return strings[index];
  }
  int i=0;
  while(strings[index][i] != '\0'){
    if(strings[index][i]>=48 && strings[index][i]<=57){
      strings[index] = "Undefined";
      return strings[index];
    }
    i++;
  }
 
  return strings[index];
}
