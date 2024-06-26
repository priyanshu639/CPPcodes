// #include<iostream>
// using namespace std;
// int main(){
//     int arr[5]={1,2,3,4,5};
//     int n =sizeof(arr)/sizeof(int);
//     for(int indx=0;indx<=n-1;indx++){
//         cout<<arr[indx]<<"\n";//change i in place of indx for better readeability
//     }cout<<endl;
//     return 0;
// }
#include <iostream>
using namespace std;
int main(){
    int arr[25]={1,2,3,4,5};
    int n =sizeof(arr)/sizeof(int);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}