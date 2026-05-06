#include <iostream>
using namespace std;


// int& func(int a){
//     int num =a;
//     int& ans = num; //Bad Practice
//     return ans;
// }


// int* fun(int n){
//     int* ptr = &n; //Bad practice;
//     return ptr;
// }
void update(int& n){
    n++;
}
int main(){

    /*
    int i = 5;

    //create a ref variable
    int& j =i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;

    */

    //Why do we need Refrence Variable??

    // int n =5;
    // update(n); //while generating a refrence variable original value is also changed.
    // cout<<n;


    // int arr[100]; //this type of array declaration is considered as a bad practice as memory alloted to the array is through stack and not heap thus declaring an array of larger size will crash the program.It is known as static allocation

    //To use the heap memory we use keyword 'new'.It is known as Dynamic memory Allocation.

    // char* ch = new char('A'); //declaring pointer ch to point dynamically allocated char.

    char cha = 'A';
    char* c = &cha;

    cout<<sizeof(cha)<<endl;
    cout<<sizeof(c)<<endl;

    int* i = new int;
    return 0;
}