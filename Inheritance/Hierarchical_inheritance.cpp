#include<iostream>
using namespace std;

class Goku {
    public:
        void SuperSayan(){
            cout << "I am a kind-hearted super sayan awakened by fury !!" << endl;
        }

        void SuperSayan2(){
            cout << "This is called super sayan 2!!" << endl;
        }
        
        void SuperSayan3(){
            cout << "This is to go further and beyond ! this is called super sayan 3!!" << endl ; 
        }
} Goku ;

class Gohan : public Goku {

    public :
        void SuperSayan(){
            cout << "Gohan inheritaed Sayan cells from goku so he can go super sayan too !" << endl;
        }
        void SuperSayan2(){
             cout << "Gohan inheritaed Sayan cells from goku so he can go super sayan 2 too ! though he achived it first !" << endl;
        }

} Gohan ;

class Goten : public Goku {

    public :
        void SuperSayan(){
            cout << "Goten inheritaed Sayan cells from goku so he can go super sayan too !" << endl;
        }
} Goten ;

int main () {

    Goku.SuperSayan();
    Goku.SuperSayan2();
    Goku.SuperSayan3();

    Gohan.SuperSayan();
    Gohan.SuperSayan2();

    Goten.SuperSayan();

    return 0 ;
}