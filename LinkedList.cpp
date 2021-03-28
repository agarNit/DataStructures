#include <bits/stdc++.h> 
using namespace std; 

class Node { 
public: 
	int data; 
	Node* next; 
}; 

void push(int val, Node** ref){
	Node* temp = new Node();
	temp->data = val;
	temp->next = *ref;
	*ref = temp;
}

void printList(Node* n) 
{ 
	while (n != NULL) { 
		cout << n->data << " "; 
		n = n->next; 
	} 
	cout << endl;
} 

int main() 
{ 
	Node* first = new Node(); 
	Node* second = new Node(); 
	Node* third = new Node(); 

	first->data = 1;
	first->next = second;

	second->data = 2; 
	second->next = third; 

	third->data = 3; 
	third->next = NULL; 

	push(0, &first);
	printList(first); 

	return 0; 
} 

