#include<iostream>
using namespace std;
int main(){
    int b=18;
    int *ptr =&b;
    cout<<&b<<"\n";
    cout<<ptr<<"\n";
    
    cout<<*ptr<<"\n";
    //changing the value of b
    *ptr=20;
    cout<<b<<endl;
} 