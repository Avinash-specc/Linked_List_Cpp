#include <iostream>
using namespace std;

int getSum(int* arr,int n){
    int sum =0;
    for(int i =0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    int n;
    cin>>n;

    int* arr = new int[n];

    for(int i =0; i<n; i++){
        cin>>arr[i]; // arr[i] == *(arr+i);
    }

    cout<<getSum(arr,n);

    //Difference between static and dynamic array

    /*
    
    static -> creates memory in stack
    dynamic -> creates memory in both stack and heap. In stack for the storing of pointer, in heap for the storing of the array.
    
    
    
    
    */

    return 0;
}