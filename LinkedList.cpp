#include <iostream>
using namespace std;

class node{
    public:
    int value;
    node* link;
};

void display(node* n){
    while(n!=NULL){
        cout << n->value << " ";
        n = n->link;
    }
    cout << endl;
}
int main(){
    node* first = NULL;
    node* second = NULL;
    node* third = NULL;

    first = new node();
    second = new node();
    third = new node();

    first-> value = 1;
    first-> link = second;
     
    second-> value = 2;
    second-> link = third;

    third-> value = 3;
    third-> link = NULL;

    display(first);

    return 0;
}