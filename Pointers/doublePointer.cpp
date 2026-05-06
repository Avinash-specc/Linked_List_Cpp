#include <iostream>
using namespace std;

void update(int **p2){
    p2 = p2+1;
    // Will it change something?? -> No
    

    // *p2 = *p2+1;
    // //Will it change something?? -> Yes

    // **p2 = **p2+1;
    //Will it change something?? -> Yes but not the address it will increment the value itself.

}

int main(){
    int i =5;
    int* p = &i;
    int** p2 = &p;
    // cout<<"Printing p : "<<p<<endl;
    // cout<<"address of p : "<<&p<<endl;
    // cout<<*p2<<endl; // * is used to derefrence the content that is stored in the pointer.


    cout<<"before "<<i<<endl;
    cout<<"before "<<p<<endl;
    cout<<"before "<<p2<<endl;
    update(p2);
    cout<<"After "<<i<<endl;
    cout<<"After "<<p<<endl;
    cout<<"After "<<p2<<endl;

    return 0;
}