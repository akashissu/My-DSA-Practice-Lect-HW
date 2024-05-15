#include <iostream>
using namespace std;

int main(){

     int n;
     cout << "Enter the Side of Square" << endl;
     cin >> n;
      
    //Outer Column
     for (int row = 0; row < n; row++)
     {
    // Inner Column
       for (int col= 0; col<n; col++){
        if (row == 0 || row == n-1){
            cout<<"* ";
        }
        else{
            // Middle Element
            if(col == 0 || col == n-1){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
       }  
       cout << endl;
     }
     

     





    return 0;
}