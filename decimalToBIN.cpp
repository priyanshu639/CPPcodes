#include<iostream>
using namespace std;
void decToBin(int decNum){
    int n=decNum;
    int pow=1;//10^0,10^1,10^2
    int bin=0;
    while(n>0){
        int lastdigit=n%2;
        bin+=lastdigit*pow;
        pow=pow*10;
        n=n/2;
    }
    cout<<"the binary of "<<decNum<<" is = "<<bin<<endl;

}



int main(){
    decToBin(4);
    return 0;
}