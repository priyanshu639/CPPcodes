#include <iostream>
using namespace std;
int main(){
    int arr[]={7,4,6,8,0,12};
    int n =sizeof(arr)/sizeof(int);
    int max=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]>max) cout<<"assigend "<<arr[i]<<" as a max :";

    }cout<<endl;
    return 0;
}