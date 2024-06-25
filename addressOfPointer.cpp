#include <iostream>
using namespace std;
int main(){
    int b=123;
    int *ptr=&b;

    char c='s';
    char*prt1=&c;
    float f=3.133893;
    float *prt=&f;
    cout<<&b<<"\n";
    cout<<&c<<" = "<<prt1<<endl;
    cout<<sizeof(ptr)<<" = "<<sizeof(prt1)<<" = "<<sizeof(prt)<<endl;
}