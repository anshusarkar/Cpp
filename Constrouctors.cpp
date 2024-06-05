#include<iostream>

using namespace std ;

class ABC {
    
    private : // private cause yk... dont want to change it though reference call's ... 

        int var1, var2 ; // That instanciation of local variables is only needed in java and CPP ... in mpython that can be done in the constructor lol more dynamically

    public :    
        ABC (int var1, int var2) {
            this->var1 = var1; // Equipment java code would be this.var1 = var1 likewise eqivalant python code would be self.var1 = var 
            this->var2 = var2;
        }
        void display (){
            cout << var1 << endl ; 
            cout << var2 << endl;
        }

        void sum (){
            cout << "Summation of the variables is : " << var1 + var2 << endl ;
        }
};


int main() {
   
    ABC A(1, 2) ; // Just like how we pass value to a constructor in java except for the use of 'new' keyword 
                  // java equivalent part is ABC A = new ABC(1, 2) ;
    A.display();
    A.sum();

    ABC* B = new ABC(3, 2); // Another way to create class instances yk java's way 

    B->display();
    B->sum();
}