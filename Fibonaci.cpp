#include<iostream>

using namespace std;

int main()
{
    cout << "Enter a the limit (Don't give more than 48 the prog would be printing negative nums) : "; 
    int inp ;
    cin >> inp ;
    int prevar  = 0;
    int nextvar  = 1;
    cout << 0  ;
    cout << ",";
    for (int i = 3 ; i < inp ; ++i) {
        long fibnum = prevar + nextvar ;
        if (fibnum > 0) {
            cout << fibnum ;
            cout << "," ;
        }
        else {
            cout << "\nThis is the limit ! after this the program starts printing negative numbers !" ;
            int var = i ;
            cout << "\nThe prgram stoped at ";
            cout << var ;
            break;
        }

        prevar = nextvar ;
        nextvar = fibnum ;
    }
    cout << "\n" ;
    cout << "Yeah ! now that's a golden ratio !\n";
    cout << "cause any number of the sequence if devided by the previous number is 1.67 except for first three numbers of the sequece !\n ";
    cout << "FYI : Golden ratio is fibonacci sequence !\n";
    return  0;
}