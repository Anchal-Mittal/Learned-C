#include<iostream>
using namespace std;
class Node{
	Node * node;
	int info=9;
	public:
	Node(){
	}
 friend class LinkedList;
};

class LinkedList{
	public:
  void print(Node &next){//friend class using the private member of other class
   	cout <<next.info;
  }
};

int main(){
	Node n;
	LinkedList list;
	list.print(n);
return 0;
}
