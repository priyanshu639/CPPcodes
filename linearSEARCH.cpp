#include<iostream>
using namespace std;
void function(int arrys[],int n){
    int key=20;
    for(int i=0;i<n;i++){
        if (arrys[i]==key)cout<<i<<"\n˜";
    }cout<<"-1";
}
int main(){
    int arry[]={2,3,5,8,10,13,10,25};
    int n = sizeof(arry)/sizeof(int);
    function(arry,n);

    return 0;
}