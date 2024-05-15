#include<iostream>

using namespace std;

int sum(int a, int b){
    int totalSum = a + b;
    return totalSum;
}

int getMultiply(int x, int y, int z){
    int result = x*y*z;
    return result;

}

void printnameTentime(){
    for ( int i = 1; i < 10; i++)
    {
        cout << "Akash" << endl;
    }
    
}

void printMultiple(int num){
    for(int i = 1; i<= 10; i++){
        cout << num*i << endl;
    }

}

void printMyname(){
    cout << "Akash" << endl;
}

void counting(){
    for (int i = 1; i <= 100; i++)
    {
        cout << i << endl;
    }
    
}

int simpleIntersest(int principal, int rate, int time){
    int result = (principal*rate*time)/100;
    return result;
}


// void toPrintPrimeno(){
//      for ( int i = 0; i < 100; i++)
//      {
//         if i == 0;
//      }
     
// }

int voteeligible(){
    int age;
    cout << "Enter Your Age"<<endl;
    cin >> age;

    if (age >=18){
        cout << "you are Eligible to vote"<<endl;

    }else {
        cout << "You are Not Eligible to vote"<<endl;
    }

    return age;

}
    


int main(){
 
    // int ans = sum(5,10);
    // cout << ans << endl;

    // int multiplicationAnswer = getMultiply(5,6,7);
    // cout << multiplicationAnswer <<endl;

    // printnameTentime();

    // printMyname();
    // int m = 5;
    // printMultiple(m);
    

    // counting();


    // int principal;
    // cout<< "Enter the Principal Amoumt" << endl;

    // cin >>principal;

    // int rate;
    // cout<< "Enter the rate " << endl;
    
    // cin >>rate;

    // int time;
    // cout<< "Enter the time" << endl;
    
    // cin >>time;

    // int resultSimple = simpleIntersest(principal,rate,time);
    // cout<< resultSimple <<endl;

    int check = voteeligible();
    cout << voteeligible <<endl;


    return 0;
}