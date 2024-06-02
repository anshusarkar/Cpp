#include<iostream>
using namespace std;

class Anshu {
    public:
        void method(){
            cout << "Hello, from class Anshu" << endl;
        }
} A ;

class Goku {
    public:
        void method1(){
            cout << "Hello, from class Goku" << endl;
        }
} G ;

class Main : public Anshu, Goku { // Inherating multiple classes 
    public:
        void method(){
            cout << "Hello, from class Main though the method was derived first in Anshu class" << endl;
        }
    
        public:
        void method1(){
            cout << "Hello, from class Main though the method was derived first in Goku class" << endl;
        }
} M ;

int main() {

    A.method();
    G.method1();
    M.method();
    M.method();
    return 0;
}