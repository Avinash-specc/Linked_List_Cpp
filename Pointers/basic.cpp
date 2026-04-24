#include <iostream>
using namespace std;

int main(){
    // int num=5;
    // cout<<num<<endl;

    // //address of Operator-&

    // cout<<"Address of num is : "<<&num<<endl;

    // // pointer --> It stores the address where the value of the variable is saved.
    // int *ptr = &num;
    // cout<<"value is : "<<*ptr;

    int num = 5;
    int a = num;
    a++;

    cout<<num<<endl;

    int *p = &num;
    cout<<"before : "<<num<<endl;
    (*p)++;
    cout<<"after : "<<num<<endl;

    //copying a  pointer
    int *q = p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p <<" - "<<*q<<endl;

    //important concept
    int i =3;
    int *t = &i;
    cout<<++(*t)<<endl;
    cout<<t<<endl;
    cout<<t+1<<endl; //On doing +1 directly to t it will change the bit by value of 4 in case of a integer or will shift to next element if it is an array.

    return 0;
}