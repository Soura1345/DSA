/*

    ******
    *    *
    *    *
    ******

*/



#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Rows:";cin>>n;
    cout<<"Col:";cin>>m;

    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            if(i==0 || i==n || j==0 || j==m){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}