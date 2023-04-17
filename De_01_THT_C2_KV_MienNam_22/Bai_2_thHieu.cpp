#include <iostream>
using namespace std;
unsigned int n, m, q, a, b;
unsigned int p[1000001], x[1000001], y[1000001];
int main() {
    cin >> n >> m >> q >> a >> b;
    for (int k = 1; k <= m; k++) {
        cin >> p[k];
    }
    for (int k = 1; k <= q; k++) {
        cin >> x[k] >> y[k];
    }
    /*
5 2 2 2 1
2 4
1 5
2 3
    //Xuất dữ liệu kiểm tra đọc ok chưa
    cout << "Du lieu da doc: \n";
    cout << n << " " << m << " " << q << " " << a << " " << b << endl;
    for (int k = 1; k <= m; k++) {
        cout << p[k] << " ";
    }
    cout << endl;
    for (int k = 1; k <= q; k++) {
        cout << x[k] << " " << y[k] << endl;
    }
    */

    return 0;
}