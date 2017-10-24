#include<iostream>
using namespace std;
class Node{
	public:
  int ele; 
  Node *next;
  Node(int e , Node * n =NULL){
	ele = e;
	next = n;
  }
};

class Link{
Node *head;
Node *tail;
 public:
 Link(){
  head =0;
  tail= 0;
  }
void insertion(int e);
void display();
void deletion(int el);
};
void Link :: display(){
	Node *p=head;
	cout<<"Content of linked list\n";
	while(p != tail){
		cout<<p->ele<<" ";
		p=p->next;
	}
		cout<<p->ele;
}
void Link :: insertion(int e){
	Node *nd= new Node(e);
	if(head == NULL){
		head= tail= nd;
	}
	else{
		tail->next= nd;
		tail=tail->next;
	}
		
}


int main()
{
Link n;
n.insertion(5);
n.insertion(6);
n.insertion(6);
n.display();

}
