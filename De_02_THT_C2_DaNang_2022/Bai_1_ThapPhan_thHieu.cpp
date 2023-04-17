#include <iostream>
#include <fstream>
using namespace std;
float x;
int main() {
    ifstream ReadFile("THAPPHAN.INP");
    ofstream OutFile("THAPPHAN.OUT");
    ReadFile >> x;
    if (x == 0) {
        cout << x;
        OutFile << x;
    } else if (x > 0) {
        for(int i = 0; i <= x+1; i++) {
            if (i > x ){
                cout << i - 1;
                OutFile << i - 1;
                break;
            }
        }
    }
    ofstream WriteFile("THAPPHAN.OUT");
    return 0;
}
