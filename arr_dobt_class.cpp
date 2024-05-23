#include <iostream>
using namespace std;


void reverseArray(int arr[],int n){

    int l = 0, h = n-1;
    while(l < h){
        swap(arr[l],arr[h]);
        l++;
        h--;
    }
}
int main(){
    
    // 1. Swap Method inbuilt fnc
//    int a = 5, b = 6;
//    swap(a,b);
//    cout << "a: = " << a << "b: = "<<b<<endl;

    // 2. temp variable
    // int a = 5, b = 6;
    // int temp = a; 
    // a = b;
    // b = temp;

    // cout << "a: = " << a << "b: = "<<b<<endl;

    //Reverse Of array

    int arr[6] = {10,20,30,40,50,60};
    int n = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr,n);


    for(int i = 0; i < n; i++ ){
        cout << arr[i] << endl;
    }
    return 0;

}