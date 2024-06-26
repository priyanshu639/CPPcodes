//dereference operator is used when we have to find the value through the give adderes using the asteric

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