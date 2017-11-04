#include <iostream>

using namespace std;

class Node{
	public:
	int ele;
	Node *next;
	Node(int el,Node *n=0){
		ele =el;
		next =n;
	}
};

class List{
	public:
	int el;
	List *head;
	List *tail;
void insert(el);
};

void List:insert(int el){
Node n =new(el);
if(head==null)
	head=tail=n;
else if(head==tail){
	tail->next=n;
	tail=tail->next;
	}	
}
int main(){
int nodeElement;

cout <<"ENTER TEH NODE  DO U WANT TO INSERT " << endl;
cin >> nodeElement;
List l;
l.insert(nodeElement);
return 0;
}
