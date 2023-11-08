// Mainly there are three types of errors in C++:
// 1. Compile time error
// 2. Runtime error
// 3. Warnings (not errors)
//

#include <iostream>
int main()
{

    // 1. Compile time error
    // std::cout<<"Compile time error"<<std::endl // Uncomment this line to see the error

    // 2. Runtime error
    // int a = 10/0; // This will give runtime error (division by zero)
    // std::cout<<a<<std::endl; // This line will not be executed

    // // 3. Warnings (not errors)
    // int b = 10; // This variable is not used anywhere
    // std::cout<<b<<std::endl; // This line will not give any error
    // // But compiler will give warning that variable b is not used anywhere


    
    return 0;
}