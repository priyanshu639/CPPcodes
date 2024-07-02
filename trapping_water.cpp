#include<iostream>
using namespace std;
void trap(int* height,int n){
    int leftmax[20000];
    int rightmax[20000];
    leftmax[0]=height[0];
    rightmax[n-1]=height[n-1];

    for(int i=0;i<n;i++){
        leftmax[i]=max(leftmax[i-1],height[i-1]);

    }
    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(rightmax[i+1],height[i+1]);
    }
    int watertrapped=0;
    for(int i=0;i<n;i++){
        int currwatertrapped=min(leftmax[i],rightmax[i])-height[i];
        if (currwatertrapped>0)
            watertrapped+=currwatertrapped;
    }
    cout<<watertrapped<<endl;
}
int main(){
    int height[]={4,2,0,6,3,2,5};
    int n=sizeof(height)/sizeof(int);
    trap(height,n);

    return 0;
}