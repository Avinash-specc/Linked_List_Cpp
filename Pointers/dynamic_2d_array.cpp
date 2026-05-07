#include <iostream>
using namespace std;

int main(){

    int row; 
    int col;
    cin>>row;
    cin>>col;

    //creating a 2D array
    int** arr = new int*[row];
    for(int i =0; i<row; i++){
        arr[i] = new int[col];
    }

    //creation done

    for(int i =0; i<row; i++){
        for(int j =0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    for(int i =0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i =0; i<row; i++){
        delete[]arr[i];
    }

    delete[]arr;

    // H.W --> create Jaggered Array dynamically;
    return 0;
}