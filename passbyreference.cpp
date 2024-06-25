//pass by reference by pointers
#include<iostream>
using namespace std;
void changeB(int *ptr){
    *ptr=20;
    cout<<*ptr<<"\n";
}
int main(){
    int b=67;
    changeB(&b);
    cout<<b<<endl;
    return 0;
}