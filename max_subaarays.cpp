#include<iostream>
using namespace std;
void maxsubarry(int *arr,int n){
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currentsum=0;
            for(int i=start;i<=end;i++){

                currentsum += arr[i];
            }
            cout<<currentsum<<" ,";
            maxsum=max(maxsum,currentsum);
        }cout<<endl;
    }
        cout<<"the maximum subarray is = "<<maxsum<<endl;
}
int main(){
    int arr[]={2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(int);
    maxsubarry(arr,n);
    return 0;
}