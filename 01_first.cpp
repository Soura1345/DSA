#include <iostream>
using namespace std;

int main(){
    int a, b;
    
    cout << "Enter a: ";
    cin >> a;
    cout<<"Enter b: ";
    cin >> b;

    int temp = a;
    a = b;
    b = temp;

    cout<<"The value of a: "<<a<<endl;
    cout<<"The value of b: "<<b<<endl;

    return 0;
}