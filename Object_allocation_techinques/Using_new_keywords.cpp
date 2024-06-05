#include<iostream>

using namespace std ;

class ABC {
    public :
        void method(){cout << "Hello, World!" << endl; }
} ;

int main(){

    ABC* a = new ABC(); // It's done in the same way as in java but class refrence get's a pointer 
                        // It must be helpful to pass values to constructors 
    a->method();

    delete a; // that's a must as you know it's a pointer so it should be freed 
}