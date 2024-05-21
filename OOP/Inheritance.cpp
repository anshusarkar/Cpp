#include<iostream>
using namespace std;

class  Anshu {
public:
    void Method_from_A_class(){
         cout << "Method from Anshu class hasbeen called ! " << endl;   
    }

} A ;

class Bablu : public Anshu {  // Can't inherit from a class bj lol :(

public:
    void Method_from_A_class(){
        cout << "Method from A class was redefined in class B ! " << endl;
    }

} B ;

int main(){
    A.Method_from_A_class();
    B.Method_from_A_class();
}
