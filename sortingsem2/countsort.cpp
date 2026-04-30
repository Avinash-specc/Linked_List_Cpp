#include <iostream>
using namespace std;

int main(){
    int arr[] = {3,6,2,1,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max =arr[0];
    for(int i =0; i<size; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    int count[max+1] = {0};
    for(int val:arr){
        count[val]++;
    }
 
    //prefix sum

    for(int i =1; i<max+1;i++){
        count[i]+=count[i-1];
    }

    //result array
    int result[size];
    for(int i= size-1; i>=0; i--){
        int val = arr[i];
        int prefixCount = count[val];
        result[prefixCount-1] = val;
        count[val]--;
    }
    for(int i =0; i<size; i++){
        cout<<result[i]<<" ";
    }
    return 0;
}