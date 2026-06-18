#include <iostream>
using namespace std;

int countOccurrences(int arr[],int size,int target){
    int count=0;
    for (int i=0;i<size;i++){
        if(arr[i]==target){
            count++;
        }
    }
    return count;
}

int main() {
    cout<<"1D Array Practice Round 2"<<endl;
    
    const int SIZE=6;
    int myNumbers[SIZE];
    
    cout << "Enter " << SIZE << " integers:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout<<"Element"<< i <<":";
        cin>>myNumbers[i];
    }
    
    int target;
    cout<<"Enter a number to search for:";
    cin>>target;
    

    int totalCount=countOccurrences(myNumbers,SIZE,target);
    cout<<"The number "<<target<<" appears "<<totalCount<<" times in the array."<<endl;
    
    return 0;
}
