#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ifstream ReadF("DOVUIVE.INP");
    ofstream OutF("DOVUIVE.OUT");
    int N, K, iTemp;
    ReadF >> N >> K;
    vector<int> vtA;
    for (int i = 1; i <= N; i++){
        ReadF >> iTemp;
        vtA.push_back(iTemp);
    }
    int doVuiVe = 0;
    for(int k = 1; k <= K; k++) {
        sort(vtA.rbegin(), vtA.rend());
        if (vtA[0]==0) break;
        doVuiVe += vtA[0];
        if (vtA[0]>=1) vtA[0] = vtA[0] - 1;
    }
    cout << doVuiVe;
    ReadF.close();
    OutF.close();
    return 0;
}