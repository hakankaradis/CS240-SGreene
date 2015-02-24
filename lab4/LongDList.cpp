#include <iostream>
#include "LongDList.h"

LongDList::LongDList(){
   head = NULL;
   tail = NULL;
}

long LongDList::Trim(){
  if(head != NULL){
    Node *temp = head;
    head = head->next;


    return temp->num;
  }
  return 0;
}

void LongDList::Prepend(long num){
   Node *new_node = new Node;
   new_node->num = num;
   new_node->next = NULL;
   new_node->prev = NULL;

   if(head == NULL){
     head = new_node;
     tail = new_node;
     return;
   }

   // prepend
   new_node->next = head;
   head->prev = new_node;
   head = new_node;
}

long LongDList::Shrink(){
  if(tail != NULL){
     Node *temp = tail;
     tail = tail->prev;
     
     return temp->num;
  }
  
  return 0;
}


void LongDList::Append(long num){
   Node *new_node = new Node;
   new_node->num = num;
   new_node->next = NULL;
   new_node->prev = NULL;

   if(head == NULL){
     head = new_node;
     tail = new_node;

     return;
   }
   
/*   Node *cur = head;
   while(cur){
     if(cur->next == NULL){
       cur->next = new_node;
       new_node->prev = cur;
       new_node->next = tail;

       return;
     }

     cur = cur->next;
   }*/

   Node *cur = tail;
   cur->next = new_node;
   new_node->prev = cur;
   tail = new_node;
   
}

std::ostream& operator<<(std::ostream& out, LongDList ll){
   Node *search = ll.head;
   while(search != ll.tail->next){
       out << search->num << std::endl;
       search = search->next;
   }

   return out;
}

