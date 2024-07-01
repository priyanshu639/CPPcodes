// timecomplexity for this code is big of n square.
// brute force optimize
#include<iostream>
using namespace std;
void maxsubarrySUM2(int *arr,int n){
    int maxsum=INT_MIN;
    int currentsum=0;
    for(int i=0;i<n;i++){
        currentsum+=arr[i];
        maxsum=max(currentsum,maxsum);
        if(currentsum<0){
            currentsum=0;
        }
        

            
        }
        cout<<"the maximum subarray is = "<<maxsum<<endl;
    }
        

int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(int);
    maxsubarrySUM2(arr,n);
    return 0;
}