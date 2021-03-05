#include <iostream>
using namespace std;

class stack{

    public:
    int arr[100];
    int top = -1;

    void push(int x){
        if(top == 99){
            cout << "Stack overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    } 

    void pop(){
        if(top == -1){
            cout << "No more elements to pop" << endl;
            return;
        }
        top--;
    }

    int Top(){
        if (top == -1){
            cout << "No elements in stack" << endl;
            return -1;
        }
        return arr[top];
    }

    bool empty(){
        if(top == -1){
            return 1;
        }
        return 0;
    }
};


int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    st.pop();
    cout << st.Top() << endl;
    st.pop();
    cout << st.Top() << endl;
    cout << st.empty() << endl;
}