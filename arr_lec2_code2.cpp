#include <iostream>
using namespace std;


void shortZeroOne(int arr[],int n){
    int ZeroCount = 0;
    int OneCount = 0;

    //counting
    for(int i = 0; i < n; i++){
        if(arr[i]==0){
            ZeroCount ++;
        }
        if (arr[i]==1){
            OneCount ++;
        }

    }
    //insertion
    int i = 0;
    for(;i<ZeroCount;i++){
        arr[i] = 0;
    }
    for(; i<n; i++){
        arr[i] = 1;
    }

}


int main(){

    int arr[] = {0,1,1,0,1,0,1};
    int size = 7;

    shortZeroOne(arr,size);
    for(int i=0; i<size; i++){
        cout << arr[i] <<endl;
    }



    return 0;
}