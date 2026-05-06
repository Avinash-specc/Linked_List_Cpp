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

    int n =5;
    update(n); //while generating a refrence variable original value is also changed.
    cout<<n;
    return 0;
}