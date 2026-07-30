#include<iostream>
using namespace std;

int main(){

    int rows,col;
    cout<<"Rows:";cin>>rows;
    cout<<"Cols:";cin>>col;cout<<endl;

    /*
        1 2 3 4 5 6 7
        2 3 4 5 6 7 1
        3 4 5 6 7 1 2
        4 5 6 7 1 2 3
        5 6 7 1 2 3 4
        6 7 1 2 3 4 5
        7 1 2 3 4 5 6

    */

    for(int i=1; i<=rows; i++){
        for(int j=i; j<=rows; j++){
            cout<<j<<" ";
        }
        for(int k=1; k<=i-1; k++){
            cout<<k<<" ";
        }
        cout<<endl;
    }cout<<endl;
    
    /*
        123456
        123456
        123456
        123456
    */


    for(int i=1;i<=rows;i++){
        for(int j=1; j<=col; j++){
            cout<<j;
        }
        cout<<endl;
    }cout<<endl;

    /*
        123456
        1____6
        1____6
        123456
    */

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=col; j++){
            if(i==1||j==1||i==rows||j==col){
                cout<<j;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }cout<<endl;

    /*
        121212
        121212
        121212
        121212
    */

    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows+2;j++){
            if((i+j)%2 == 0){
                cout<<"1";
            }else{
                cout<<"2";
            }
        }
        cout<<endl;
    }cout<<endl;

    /*
        1
        12
        123
        1234
    */

    for(int i=1;i<=4;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }cout<<endl;

    /*
        ___1
        __121
        _12321
        1234321
    */

    for(int i=1; i<=rows; i++){
        for(int j=1; j<=rows-i; j++){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<k;
        }
        for(int l=i-1; l>=1; l--){
            cout<<l;
        }
        cout<<endl;
    }cout<<endl;

    /*
        ___1
        __2 2
        _3   3
        4444444
    */
    
    
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=rows-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=2*i-1;k++){
            if(k==1||k==2*i-1||i==rows){
                cout<<i;
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }cout<<endl;


    return 0;
}