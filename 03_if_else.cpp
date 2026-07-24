#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    // if(num % 2 == 0 && num % 3 == 0){
    //     cout<< "1";
    // }else{
    //     cout<<"0";
    // }   
    
    (num%3 == 0 || num%5 == 0)? cout<<num: cout<<"0";
    
    return 0;
}  