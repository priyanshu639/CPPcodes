#include<iostream>
using namespace std;
void print_subarray(int *arr,int n) {
    for (int start=0;start<n;start++){
        for (int end=start;end<n;end++){
            // cout<<"("<<start<<","<<end<<") ";
            for(int i=start;i<=end;i++){
                cout<<arr[i];
            }
            cout<<",";
        }
        cout<<endl;
    }
}

int main(){
    int arr[5]={1,2,3,4,5};
    int n = 5;
    print_subarray(arr,n);

    return 0;

}
// timecomplexitiy for this code is big of n cube "o(n^3)"
