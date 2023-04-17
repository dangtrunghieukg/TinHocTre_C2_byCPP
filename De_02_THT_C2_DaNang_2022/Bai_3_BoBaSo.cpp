#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;
int N;
int arrA[101];
vector<int> vtA;
int main() {
    ifstream ReadFile("BOBASO.INP");
    ofstream WriteFile("BOBASO.OUT");
    ReadFile >> N;
    for (int i = 1; i <= N; i++) {
        ReadFile >> arrA[i];
        //cout << arrA[i] << " ";
    }
    int tongS;
    vtA.clear();
    for(int i = 1; i <= N-2; i++) {
        for (int j = i+1; j <= N-1; j++) {
            for (int k = j + 1; k <= N; k++){
                tongS = 3*arrA[i] + 2*arrA[j] - 5*arrA[k];
                vtA.push_back(tongS);
            }
        }
    }
    sort(vtA.rbegin(), vtA.rend());
    cout << vtA[0];
    ReadFile.close();
    WriteFile.close();
    return 0;
}