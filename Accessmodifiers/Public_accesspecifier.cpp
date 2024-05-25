#include<iostream>
using namespace std;
class ABC {

    public :

        float area_of_a_circule(int r){
            cout << "Area of the circlue is : " << r*r*3.14 << endl ;
        }

} ;

int main(){
    ABC a ;
    a.area_of_a_circule(4);
    return 0 ;
}