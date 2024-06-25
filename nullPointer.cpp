#include <iostream>
using namespace std;
int main(){
    int*ptr=NULL;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;//derefrencing and it is not posible in null operator and it will
                    //through error = segmentation fault
    return 0;
}