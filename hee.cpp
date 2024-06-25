// #include <iostream> // include the standard input-output stream library

// int main() {
//     // Variable declaration
//     int number;
    
//     // Output a message to the console
//     std::cout << "Enter a number: ";
    
//     // Input a number from the user
//     std::cin >> number;
    
//     // Conditional statement
//     if (number % 2 == 0) {
//         std::cout << "The number " << number << " is even." << std::endl;
//     } else {
//         std::cout << "The number " << number << " is odd." << std::endl;
//     }
    
//     // Loop from 1 to the entered number
//     for (int i = 1; i <= number; ++i) {
//         std::cout << i << " ";
//     }
    
//     // End the line after the loop
//     std::cout << std::endl;
    
//     return 0; // Return 0 to indicate successful execution
// }
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