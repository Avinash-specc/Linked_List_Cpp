#include <iostream>
using namespace std;

int main(){
    // int arr[10] ={2,5,6,67,88,9};
    // cout<<"Address of first memory block is "<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<"Address of first memory block is "<<&arr[0]<<endl;
    // cout<<*arr<<endl;
    // cout<<*(arr+1)<<endl;
    // cout<<2[arr]; //This syntax is also valid in cpp.

    // int temp[10];
    // cout<<sizeof(temp)<<endl;

    // int *ptr = &temp[0];
    // cout<<sizeof(ptr)<<endl; //It is the size of pointer ptr
    // cout<<sizeof(*ptr)<<endl;// It is the size of the element to which the pointer points.

    // int a[20]={1,2,3,5};
    // cout<<&a[0]<<endl;
    // cout<<&a<<endl;

    // int*p = &a[0];
    // // cout<<p<<endl;
    // // cout<<*p<<endl;
    // cout<<&p<<endl; //It's address will differ from those of a;


    int arr[10];

    // Error
    // arr= arr+1;

    int *ptr = &arr[0];
    cout<<ptr<<endl;
    ptr = ptr+1;
    cout<<ptr<<endl;

    return 0;
}