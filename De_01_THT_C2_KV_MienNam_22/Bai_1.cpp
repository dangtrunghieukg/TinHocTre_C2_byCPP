#include <iostream>
using namespace std;

//Dùng kiểu unsigned long long cho được số rất lớn (8 Byte)
unsigned long long a1, b1, a2, b2, a3, b3;
unsigned long long x, y, z;
int dem = 0;

int main() {
    //Do bài không yêu cầu đọc file, nên ta hiểu nhập từ bàn phím 6 số cùng một lúc
    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    //Xuất dữ liệu để kiểm tra, copy: 6 8 4 5 27 35 Right - Click để dán số vào Terminal cho nhanh
    //cout << "Nhap vao a1, b1, a2, b2, a3, b3 " << endl;
    //cout << a1 << " " << b1 << " " << a2 << " " << b2 << " " << a3 << " " << b3 << endl;
    for (z = a3; z <= b3; z++) {
        for (x = a1; x <= b1; x++) {
            for (y = a2; y <= b2; y++) {
                if (x*y == z) {
                    // cout << "(" << x << ", " << y << ", " << z << ") ; ";
                    dem++;
                }
            }
        }
    }
    //Xuất kết quả
    cout << dem;
    return 0;
}