#include <iostream>
using namespace std;

int main(){
    int arr[] =  {12,4,0,2,332};
    int size = sizeof(arr)/sizeof(arr[0]);

    int max = arr[0];
    for(int i:arr){
        if(i>max){
            max=i;
        }
    }

    for(int pos =1 ; max/pos>0; pos*=10){
        int count[10] = {0};
        int result[size];
        for(int i =0 ;i<size; i++){
            int digit = (arr[i]/pos)%10;
            count[digit]++;
        }


        //prefix sum
        for(int i =1; i<10; i++){
            count[i]+=count[i-1];
        }

        //place elements
        for(int i = size-1; i>=0; i--){
            int digit = (arr[i]/pos)%10;
            result[count[digit]-1] = arr[i];
            count[digit]--;
        }

        //copy to original array.
        for(int i =0; i<size; i++){
            arr[i] = result[i];
        }
    }

    //prints output
    for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}