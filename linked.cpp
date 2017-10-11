#include<iostream.h>
class Node{
  int ele; 
  Node *next;
  Node(int e , Node * n =0){
	ele = e;
	next = n;
  }
}

class Link{
Node *head;
Node *tail;
 Link(){
  head =0;
  tail= 0;
  }
void insertion(int e);
}

int main()
{
Link n;

}
