#include <iostream>
using namespace std;
void changeA(int a){
    a=23;
    cout<<a<<endl;
}
int main(){
    int a=34;
    changeA(a);
    cout<<a<<endl;
    return 0;
}