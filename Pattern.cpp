#include <iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the No" << endl;
    cin >> n;
    
    for(int row = 0; row<n; row++){
        for(int col = 0; col < n-row; col++){

        
    
    if (row == 0 || row - 1 || col == 0 || row == col ){
        cout<<"* ";
    }
        else{
            cout << "  ";
        }

        
        }

        cout << endl;
    }

    // int n;
    // cout << "Enter the No" << endl;
    // cin >> n;

    // for(int row = 0; row<n; row++){
    //     for (int col = 0; col < n-row; col++)
    //     {
    //         cout <<"*";
    //     }

    // cout << endl;
    // }


    // int n;
    // cout << "Enter the No" << endl;
    // cin >> n;

    // for(int row = 0; row<n; row++){
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         cout <<"*";
    //     }

    // cout << endl;
    // }
      
    // //Outer Column
    //  for (int row = 0; row < n; row++)
    //  {
    // // Inner Column
    //    for (int col= 0; col<n; col++){
    //     if (row == 0 || row == n-1){
    //         cout<<"* ";
    //     }
    //     else{
    //         // Middle Element
    //         if(col == 0 || col == n-1){
    //             cout<<"* ";
    //         }
    //         else{
    //             cout<<"  ";
    //         }
    //     }
    //    }  
    //    cout << endl;
    //  }
     
    

     





    return 0;
}