#include <iostream>
using namespace std;

void reverseArray(int arr[],int size) {
    int start=0;
    int end=size-1;
    
    while (start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main() {
    cout<<"1D Array training: Reversing"<<endl;
    const int SIZE=5;
    int myNumbers[SIZE];
    cout<<"Enter "<<SIZE<<" integers:"<<endl;
    for(int i=0; i<SIZE;i++){
        cout<< "Element "<<i<<":";
        cin>>myNumbers[i];
    }
    reverseArray(myNumbers,SIZE);
    cout<<"The reversed array is:"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<myNumbers[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}
