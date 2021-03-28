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

void append(int val, Node** ref){
	Node* temp = new Node();
	temp->data = val;
	temp->next = NULL;
	if (*ref == NULL)
	{
		*ref = temp;
		return;
	}
	Node *last = *ref;
	while (last->next != NULL)
		last = last->next;
	last->next = temp;
	return;
}

void insert(int val, Node* prev){
	if(prev->next == NULL){
		cout << "The previous node cannot be null";
		return;
	}
	Node* temp = new Node();
	temp-> data = val;
	temp-> next = prev-> next;
	prev-> next = temp;
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
	append(4, &first);
	insert(5,second);
	printList(first); 

	return 0; 
} 

