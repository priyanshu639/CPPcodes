#include<iostream>
using namespace std;
int main(){
    int marks[50];
    int marks1[50]={1,2,3};
    int marks2[]={1,4,8};
    int marks3[5]={1,2,3,4,5};
    cout<<marks<<endl;
    cout<<marks1<<endl;
    cout<<marks3<<endl;
    cout<<marks2[1]<<endl;
    cout<<sizeof(marks3)/sizeof(int);

    return 0;

}