#include <iostream>
using namespace std;

int findUniqueNo(int arr[],int n){
    int ans = 0;

    for(int i = 0; i<n; n++){
        ans = ans ^ arr[i];
        
    }
    return ans;
}


int main(){
    int arr [] = {4,1,2,1,4};
    int size = 5;

    int ans = findUniqueNo(arr,size);
    cout<<"Unique no is "<< ans <<endl;
    return 0;

}
