#include<iostream>
using namespace std;

class ABC {
    protected :
        int var = 100 ;
} a ;

int main(){

    a.var = 1; // Shall be giving an error as the carriable is protected 

    cout << a.var << endl;

    return 0 ;
}