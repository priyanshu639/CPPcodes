#include <iostream>
using namespace std;
void changeA(int a){//hum log a ki jagah kuch bhi likh sakte tab bhi wo a ka copy hi store karega usme

    a=23;
    cout<<a<<endl;
}
int main(){
    int a=34;
    changeA(a);
    cout<<a<<endl;
    return 0;
}
