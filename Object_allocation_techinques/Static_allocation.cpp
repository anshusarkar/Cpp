#include<iostream>

using namespace std;

class ABC {
    public : 
        void method(){cout << "Hello, world !" << endl ;}
} ;

static ABC A ;

int main() {

    A.method();
    
    return 0;
}