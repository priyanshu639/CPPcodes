// timecomplexity for this code is big of n square.
// brute force optimize
#include<iostream>
using namespace std;
void maxsubarrySUM2(int *arr,int n){
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        int currentsum=0;
        for(int end=start;end<n;end++){
            currentsum+= arr[end];
            maxsum=max(maxsum,currentsum);
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