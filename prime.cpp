//Wap to check if a number is prime
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number :- ";
    cin>>n;
    count = 0;
    for (int i=1;i<=n;i++){
        if (n%i==0){
            count++;

        }
        if (count == 2){
            cout<<"Prime";
        }
        else{
            cout<<"Not prime";
        }
    }
    return 0;
}