#include <iostream>
#include "LongList.h"

LongList::LongList(){
   nodes = NULL;
}

long LongList::Trim(){
  if(nodes != NULL){
    Node *temp = nodes;
    nodes = nodes->next;
 
    return temp->num; 
  } 
  return 0;
}

void LongList::Prepend(long num){
   Node *new_node = new Node;
   new_node->num = num;
   new_node->next = NULL;

   if(nodes == NULL){
     nodes = new_node;
     return;
   }
   // append
   /*Node *cur = nodes;
   while(cur){  
     if(cur->next == NULL){
       cur->next = new_node;
       
       return;
     }

     cur = cur->next;	
   }*/
   // prepend
   new_node->next = nodes;
   nodes = new_node;
}

std::ostream& operator<<(std::ostream& out, LongList ll){
   Node *search = ll.nodes;
   while(search){
       out << search->num << std::endl;
       search = search->next;
   }

   return out;
}

