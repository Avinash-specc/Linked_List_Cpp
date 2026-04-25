#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,4,8,9,5};
    char ch[6] = "abcde";

    cout<<arr<<endl;
    cout<<ch<<endl; 
    //Cout implementation for int array and character array is different

    char *c = &ch[0];
    //prints entire string.
    cout<<c<<endl;

    char temp='z';
    char*p = &temp;

    cout<<p<<endl;


    return 0;
}