
#include <iostream>
using namespace std;
void changeA(int &param){
    param=34;
    cout<<param<<endl;
}
int main (){
    int a=20;
    changeA(a);
    cout<<a<<endl;
    return 0;
}