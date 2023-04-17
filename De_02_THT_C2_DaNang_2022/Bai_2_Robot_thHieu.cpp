#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
string sIn, sLR;
string BienDoi(string sIn, char c){
    string sOut = sIn;
    if (c == 'R') {
        sOut.erase(sOut.length()-1, 1);
        sOut = sIn[sIn.length()-1]+sOut;
    }
    if (c == 'L') {
        sOut.erase(0, 1);
        sOut = sOut+sIn[0];
    }
    return sOut;
}
int main() {
    ifstream ReadFile("ROBOT.INP");
    ofstream OutFile("ROBOT.OUT");
    ReadFile >> sIn;
    ReadFile >> sLR;
    //cout << sIn << endl << sLR << endl;
    string strKQ = sIn;
    for(int i = 0; i < sLR.length(); i++) {
        strKQ = BienDoi(strKQ, sLR[i]);
    }
    cout << strKQ;
    OutFile << strKQ;
    ReadFile.close();
    OutFile.close();
    return 0;
}