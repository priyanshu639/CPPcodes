#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array : ";
    cin>>n;
    int arry[n];
    for(int i=0;i<n;i++){
        cin>>arry[i];


    }
    for(int i=0;i<n;i++){
        cout<<arry[i]<<" ";
    }cout<<endl;
    return 0;
}