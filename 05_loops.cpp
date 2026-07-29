#include<iostream>
using namespace std;

int main(){
    // int n;
    // cin>>n;

    // int sum = 0;

    // //while loop

    // int i = 1;
    // while(i<=n){
    //     sum+= i;
    //     i++;
    // }

    // for loop

    // for(int i=1; i<=n; i++){
    //     sum += i;
    // }
    // cout<<sum<<endl;

    // int i=5;
    // while(true){
    //     if(i%7 == 0){
    //         cout<<i<<endl;
    //         break;
    //     }
    //     i+=5;
    // }

    // for(int i=5;;i+=5){
    //     if(i%7==0){
    //         cout<<i<<endl;
    //         break;
    //     }
    // }

    // do-while loop

    int n; 
    cin>>n;
    
    int i,sum=0;
    do{
        sum+=i;
        i++;
    } while (i<=n);
    

    cout<<sum<<endl;

    return 0;
}