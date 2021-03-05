#include <iostream>
using namespace std;

class queue{

    public:
    int arr[100];
    int front = -1;
    int back = -1;

    void push(int x){
        if(back == 99){
            cout << "Queue overflow" << endl;
            return;
        }
        back++;
        arr[back] = x;

        if(front == -1){
            front++;
        }
    }

    void pop(){
        if(front == -1 || front > back){
            cout << "No elements in queue to pop" << endl;
            return;
        }
        front++;
    }

    int peek(){
        if(front == -1 || front > back){
            return -1;
        }
        return arr[front];
    }

    bool empty(){
        if(front == -1 || front > back){
            return 1;
        }
        return 0;
    }
    
};
int main(){
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.peek() << endl;
    q.pop();
    cout << q.empty() << endl;
    return 0;
}