#include <iostream>
using namespace std;

class Base {
public:
    virtual void method() {
        cout << "Virtual methods are just used to be overridden like in java if inherited by any other class, though if inherited by any other class in cpp we redefine it anyway!\n" << endl;
    }

    virtual void method2() = 0; // Pure virtual method
};

class Derived : public Base {
public:
    void method() override {
        cout << "The virtual methods are often the methods that are to be inherited and overridden\n";
    }

    void method2() override {
        cout << "The method call was done through the derived class after redefining it as it's a virtual method!\n"; 
    }
};

int main() {
    Derived D;  // class instance of derived class
    D.method();
    D.method2();

    Base *B ; // class instance of base class with pointer

    B = &D ; // linking base class reference and derived class reference

    B->method();  // Demonstrates polymorphism
    B->method2(); // Demonstrates polymorphism

    return 0;
}
