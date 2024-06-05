#include<iostream>
using namespace std;

class ABC {
private:
    int var;
    ABC* ptr;

public:
    ABC() {
        var = 0;
        ptr = NULL;
    }

    void insert(int value) {
        ABC* newNode = new ABC(); // class instance
        newNode->var = value;
        if (ptr == NULL) {
            ptr = newNode;
        } else {
            ABC* current = ptr;
            while (current->ptr != NULL) {
                current = current->ptr;
            }
            current->ptr = newNode;
        }
    }

    void display() {
        ABC* current = ptr;
        while (current != NULL) {
            cout << current->var << endl;
            current = current->ptr;
        }
    }
    ~ABC(){
        ABC* current = ptr;
        while (current != NULL) {
            ABC* next = current->ptr;
            delete current;
            current = next;
        }
    }
};

int main() {
    ABC A;
    A.insert(1);
    A.insert(2);

    A.display();


    return 0;
}
