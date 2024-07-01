#include<iostream>
using namespace std;
void function(int arr[]){
    arr[1]=45;
}


int main(){
    int arr[]={1,3,6,7,8};

    cout<< *arr<<"\n";//arr[0]
    cout<<*(arr+1)<<"\n";//arr[1]
    cout<<*(arr+3)<<"\n";//arr[3]
    function(arr);
    cout<<arr[1]<<endl;//passing array name is equivalent to passing the pointer.

    return 0;
}