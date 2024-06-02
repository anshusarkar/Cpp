#include<iostream>

using namespace std ;

class ABC {
    public :
        int var1, var2, sum ;
        ABC (int var1, int var2) {
            sum = var1 + var2;
        }
        void display (){
            cout << sum << endl;
        }
};


int main() {
   
    ABC A(1, 2) ; // Just like how we pass value to a constructor in java except for the use of 'new' keyword 
                  // java equivalent part is ABC A = new ABC(1, 2) ;
    A.display();
}