#include<iostream>

int main(int argc, const char** argv) {

    int var ;

    std::cout << "Hello, CPP!\n"; // << is called an inserion opetator in CPP 
    std::cout << "User please enter an integr :\n-> ";
    std:: cin >> var ; // It's called an extraction opetator
    std::cout << "Entered value is : " << var << std::endl; // std namespaces end line oprtator.

    return 0;
}