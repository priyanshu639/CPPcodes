#include<iostream>
using namespace std;
int main(){
    int a=6;
    int *ptr=&a;
    cout<<ptr<<endl;//1 (1and 3 will be equal)
    ptr++;
    cout<<ptr<<endl;
    ptr--;
    cout<<ptr<<endl;//3
    return 0;


}