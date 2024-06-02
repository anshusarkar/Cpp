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

class Pan : public Gohan {

    public :
        void SuperSayan(){
            cout << "Pan has SuperSayan cells too, soon she would go super sayan ! she got it from gohan " << endl;
        }
} Pan ;


int main () {
    
    Goku.SuperSayan();
    Goku.SuperSayan2();
    Goku.SuperSayan3();

    Gohan.SuperSayan();
    Gohan.SuperSayan2();

    Pan.SuperSayan();
 

}