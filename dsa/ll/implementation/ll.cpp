#include<iostream>
using namespace std;


class Node {
public:
	int data;
	Node* next;

	Node(int value){
		data = value;
		next = nullptr;
	}
}

class LinkedList{
public:
	Node* head;


	LinkedList(){
		head = nullptr;
	}

	void insertion(int value){
		Node* newNode =new Node(value)
	}
}

int main(int argc, char const *argv[])
{
	/* code */
	return 0;
}