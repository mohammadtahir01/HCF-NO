#include<iostream>
using namespace std;
int main(){
    int num1, num2;
    cout<<"Enter the first number:";
    cin>>num1;
    cout<<"Enter the second number:";
    cin>>num2;
    
    if(num1==0){
        cout<<num2;
    }else if(num2==0){
        cout<<num1;
    }
    
    while(num1 != num2){
        if(num1>num2){
            num1=num1-num2;
        }else{
            num2=num2-num1;
        }
    }
    cout<<num1;
    
}