// There are four types of statements in C++:
// 1. Declaration statement
// 2. Expression statement
// 3. Compound statement
// 4. Selection statement

// 1. Declaration statement
// int a = 10; // This is a declaration statement

// 2. Expression statement
// a = 20; // This is an expression statement

// 3. Compound statement
// {
//     int a = 10;
//     std::cout<<a<<std::endl;
// } // This is a compound statement

// 4. Selection statement
// if(a == 10){
//     std::cout<<"a is 10"<<std::endl;
// } // This is a selection statement

// Types of functions in C++:
// 1. Built-in functions
// 2. User-defined functions
// 3. Lambda functions

// 1. Built-in functions
// such as std::cout, std::cin, std::endl, etc.

// 2. User-defined functions
// int add(int a, int b){
//     return a+b;
// } // This is a user-defined function

// 3. Lambda functions
// auto add = [](int a, int b){
//     return a+b;
// }; // This is a lambda function (introduced in C++11)

// types of streams in C++:
// 1. Input stream (std::cin)
// 2. Output stream (std::cout)
// 3. Error stream (std::cerr)
// 4. Log stream (std::clog)

#include <iostream>
int main()
{

    // ------------------- Input stream (std::cin) -------------------
    // int a;
    // std::cin>>a; // This will take input from the user

    // ------------------- Output stream (std::cout) -------------------
    // std::cout<<"Hello World"<<std::endl; // This will print "Hello World" on the screen

    // ------------------- Error stream (std::cerr) -------------------
    // std::cerr<<"This is an error"<<std::endl; // This will print "This is an error" on the screen

    // ------------------- Log stream (std::clog) -------------------
    // std::clog<<"This is a log"<<std::endl; // This will print "This is a log" on the screen

    // ------------------- std::endl -------------------
    // std::cout<<"Hello World"<<std::endl; // This will print "Hello World" on the screen

    // ------------------- std::flush -------------------
    // std::cout<<"Hello World"<<std::flush; // This will print "Hello World" on the screen

    // ------------------- std::puts -------------------
    // std::puts("Hello World"); // This will print "Hello World" on the screen

    // ------------------- std::write -------------------
    // char str[] = "Hello World";
    // std::cout.write(str, sizeof(str)); // This will print "Hello World" on the screen

    // ------------------- std::getlines -------------------
    // char str[20];
    // std::cin.getline(str, 20); // This will take input from the user and store it in str variable
    // std::getline(std::cin, str); // This will take input from the user and store it in str variable

    std::cout << "Hello World" << std::endl;
    return 0;
}