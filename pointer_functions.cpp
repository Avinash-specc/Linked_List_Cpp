#include <iostream>
using namespace std;

void print(int*p){
    cout<<*p<<endl;
}

void update(int *p){
    // p = p+1;
    // cout<<"inside "<<p<<endl;

    *p = *p+1;
}

int getSum(int arr[], int n){

    cout<<"size : "<<sizeof(arr)<<endl; //when we pass array as an argument actually a pointer of an array is passed that means if we change the value inside the function it will reflect in the original array.
    int sum =0;
    for(int i =0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int value = 5;
    int *p = &value;
    
    print(p);
    cout<<"before : "<<*p<<endl;
    update(p);
    cout<<"After : "<<*p<<endl;

    int arr[5] = {1,2,3,4,5};
    cout<<"sum is : "<<getSum(arr+2,3);
    return 0;
}