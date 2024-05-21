#include<iostream>
#include<string.h> // Uisng C header files 

using namespace std ;

class Anshu {

    public :

        int var ;
        char c[100] ;

        void sayhi(){
            cout << "Hi" << endl;
            return 0;
        }

} a ; // Just like structers insatnce here we take class instance tha's called obj 

int main (){
    a.var = 100 ;
    cout<<a.var<<endl;
    cout<<"Enter a sentence " <<endl;
    cout<<">>" ;
    fgets(a.c, 100, stdin);

    for(int i = 0 ; i < 100 ; i++){
        cout<<a.c[i];
    }

    a.sayhi();
    
}