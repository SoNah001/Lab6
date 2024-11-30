#include<iostream>
using namespace std;

int main(){
    int j=0;
    int k=0;
    int N;
    while (true){
     cout << "Enter an integer: ";
     cin >> N;
     if(N==0){
         break;
     }
     if(N%2==0){
         j=j+1;
     }
     else{
         k=k+1;
     }
    }
    cout << "#Even numbers = " << j << "\n";
    cout << "#Odd numbers = " << k;
    return 0;
}