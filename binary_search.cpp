#include<iostream>
using namespace std;
int printarry(int *arr,int n,int  key){
    int start=0,end=n-1;
    while(start<=end){
        int mid=(start+end)/2;
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){//for 2nd half
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        }
    return -1;
}
int main(){
    int arr[]={2,4,6,8,10,12};
    int n=sizeof(arr)/sizeof(int);
    
    cout << printarry(arr,n,10)<<endl;


    return 0;
}  