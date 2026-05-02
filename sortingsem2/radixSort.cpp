#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int arr[] = {1,603,44,7,101,67};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for(int i: arr){
        if(i>max){
            max=i;
        }
    }
    for(int pos = 1; max/pos>0; pos*=10){
        int result[size];
        int count[10]= {0};

        //count occurences
        for(int i =0; i<size; i++){
            int digit = (arr[i]/pos)%10;
            count[digit]++;
        }

        //prefix sum

        for(int i =1; i<10; i++){
            count[i] += count[i-1];
        }

        //result array
        for(int i = size-1; i>=0; i--){
            int digit =(arr[i]/pos)%10;
            result[count[digit]-1] = arr[i];
            count[digit]--;
        }

        //copy back to original array
        for(int i=0; i<size; i++){
            arr[i] = result[i];
        }
    }

    for(int i=0; i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}