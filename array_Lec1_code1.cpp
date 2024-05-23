#include <iostream>
#include <limits.h>
using namespace std;


    //int main(){
    // int arr[10];

    // int crr[] = {3,6,7,3,42};
    // int drr[] = {5,34,6,23,65};

    // cout << crr[4] << endl;

    //Using of fill method

    // int arr [4];
    // fill(arr,arr+4,40);
    // cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << endl;

    //taking Input from user in Arrays


    // int arr[5];
    // for(int index=0; index<5; index ++){
    //     cout<<"Enter THe value of array  "  <<index<<endl;
    //     cin>> arr [index];
    // }
    // //Prrit

    // for(int index = 0; index < 5; index ++){
    //     cout << arr [index] <<" ";
    // }


    //Fnction In Arrays

    // void print(int arr[],int size){
    //     for(int index = 0; index < size; index++){
    //         cout << arr [index] << " ";
    //     }

    // }

    // bool findtarget(int arr [], int size, int target){
    //     for(int i = 0; i < size; i++){

    //         int currentElement = arr[i];

    //         if (currentElement == target){
    //             //Found
    //             return true;
    //         }
    //     }
        // yaha tak puchuna iska mtlab purra loop khatam ho gya
        ///iska mtlab ab element nahi to false hoga
    //     return false;
    // }

    // int findMax(int arr[], int size){
    //     int maxAns = INT_MIN;
    //     for(int i = 0; i<size; i++){
    //         maxAns = max(maxAns, arr[i]);
    //     }
    // }


    void printZeroesAndOnes(int arr[], int n){
        int zerosCount = 0;
        int onesCount = 0;

        //Traverse The Array

        for(int i = 0; i<n; i++){
            int currElement = arr[i];


            if(currElement == 0){
                zerosCount ++;
            
            }

            if(currElement == 1){
                onesCount ++;
            }
        }
        // cout << "Total No of zeroes " <<zerosCount << endl;
        // cout << "Total No of Ones " <<onesCount << endl;

    }
    
    void extremePrint(int arr[],int n){
        int i = 0;
        int j = n-1;

        while(i < j){
            cout << arr[i] << " ";
            i++;
            cout << arr[j] << " ";
            j++;
        }
    }

    int main(){


        
        int arr [] = {10,40,61,71,21,80};
        int size = 6;
        extremePrint(arr, size);
        // // int target = 3;
        
        // printZeroesAndOnes(arr,size);
        // cout << "max no is " << findMax(arr , size) << endl;

        // bool ans = findtarget(arr,size,target);
        // cout << "Your Answer is " << ans;
        // // print(arr,size);

        return 0;
}

    
