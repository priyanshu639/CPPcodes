#include<iostream>
using namespace std;
void funct(int num[],int n){
    for(int i=0;i<n;i++){
        cout<<num[i]<<" , ";

    }cout<<endl;
}
int main(){
    int arr[]={1,5,3,8,4,2};
    int n =sizeof(arr)/sizeof(int);
    funct(arr,n);
    

    return 0;
}