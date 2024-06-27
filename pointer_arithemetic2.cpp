#include<iostream>
using namespace std;
int main(){
    int a=6;
    int *ptr=&a;
    cout<<ptr<<endl;
    ptr=(ptr+3);
    cout<<(ptr-3)<<endl;
    
    return 0;


}