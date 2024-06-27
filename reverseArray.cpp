#include<iostream>
using namespace std;
void printarry(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" , ";
    }cout<<endl;

}
int main(){
    int arr[]={9,4,3,2,1};
    int n=sizeof(arr)/sizeof(int);
    int start=0,end=n-1;
    while(start<end){
        int temp=arr[start];//swaping can be done like this also-->
        arr[start]=arr[end];//swap(arr[start],arr[end])
        arr[end]=temp;//an inbuilt function is present in c++ for swaping.

        start++;
        end--;
    }
    printarry(arr,n);
    return 0;
}