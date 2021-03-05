#include <iostream>
using namespace std;

int main(){
    int size_of_array;
    cin >> size_of_array;
    int array[size_of_array];
    for(int i=0;i<size_of_array;i++){
        cin >> array[i];
    }
    cout << "Elements in array : ";
    for(int i=0;i<size_of_array;i++){
        cout << array[i] << " ";
    }
    cout << endl;
}
