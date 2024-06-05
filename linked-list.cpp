#include<iostream>
using namespace std;

class Linkedlist {
private:
    int var = 0;
    Linkedlist* ptr; // self referance of the linkedlist class just like in C's "structue"

public:

    Linkedlist() {
        this -> var = var;
        this -> ptr = NULL; // But unlike C now the class would have a constructor just like java and python anyway C is just C with classes 
    }


    void insert(int value) {
        Linkedlist* newNode = new Linkedlist(); // Class instance 

        newNode -> var = value; // Linking values with newNode instance's var named variable

        if (ptr == NULL) {
            ptr = newNode;
        } else {
            
            Linkedlist* current = ptr;

            while (current->ptr != NULL) {
                current = current->ptr;
            }
            current->ptr = newNode;
        }
    }

    void display() {
        Linkedlist* current = ptr;
        while (current != NULL) {
            cout << current->var << endl;
            current = current->ptr;
        }
    }
};

int main() {
    Linkedlist A;
    A.insert(1);
    A.insert(2);

    A.display();

    return 0;
}
