#include <iostream>
using namespace std;
class B{
public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1 = this -> a;
        int value2 = obj.a;
        cout<<"output: "<<value2-value1<<endl;
    } // Strict Syntax to implement operator overloading.
};
int main(){ 
    B obj1,obj2;
    
    obj1.a = 4;
    obj2.a = 7;
    obj1+obj2; //whenever this will be written code written inside operator+ will be implemented and it is known as operator overloading.
    return 0;
}