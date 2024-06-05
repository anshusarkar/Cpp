#include <iostream>

using namespace std;

class ABC {
public:
    int var1, var2;

    // Constructor
    ABC(int a, int b) {
        this->var1 = a;
        this->var2 = b;
    }

    // Destructor : it's used to deallocate memory allocated by the constructor .. it's more like cleaining a pointer using free(); 
    ~ABC() {
        cout << "Hello, World!" << endl;
    }

    // Display function
    void display() {
        cout << var1 << "," << var2 << endl;
    }
};

int main() {
    ABC* A = new ABC(1, 2);

    A->display();

    // Free allocated memory
    delete A;

    return 0;
}
