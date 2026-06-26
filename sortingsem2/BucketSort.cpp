#include <iostream>
using namespace std;

int main(){
    int arr[] = {0.78,0.17,0.39,0.26,0.72,0.94,0.21,0.23,0.68};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int max= arr[0];
    int result[size];
    for(int i: arr){
        if(i>max){
            max=i;
        }
    }

    int maxIndex = max*size;
    int bucketSize = maxIndex+1;

    return 0;
}