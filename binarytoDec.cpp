#include <iostream>
using namespace std;
void binToDec(int binNum){
    int n =binNum;
    int decNum=0;
    int pow=1;//2^0,2^1,2^2
    while(n>0){
        int lastdigit =n%10;
        decNum+=lastdigit*pow;
        pow=pow*2;
        n=n/10;
        

    }
    cout<<decNum<<endl;
}
int main(){
    binToDec(101);
    return 0;
}