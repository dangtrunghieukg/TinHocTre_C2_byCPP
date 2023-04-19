#include <iostream>
#include <cmath>
using namespace std;
unsigned long long n, m, q, a, b;
int P[9999], x[9999], y[9999];
int tien, tong, dau, cuoi;

bool Co(int x)
{
    //kiem tra xem tram co phai la tram dac biet khong
    bool  co=false;
    for(int i=1;i<=m;i++)
    {
        if(x==P[i])
        {
            co=true;
            break;
        }
    }
    return co;
}
int Cuoi()
{
    // tim vi tri tram dac biet lon nhat nho hon cuoi(y[i])
    int vitri;
    for(int i=m;i>0;i--)
    {
        if(P[i] < cuoi)
        {
            vitri=P[i];
            break;
        }
    }
    return vitri;
}

int main()
{
    cin >> n >> m >> q >> a >> b;

    for(int i = 1; i <= m; i++)
        cin >> P[i];

    for(int i = 1; i <= q ; i++)
        cin >> x[i] >> y[i];

    for(int i = 1; i <= q ; i++)
    {
        dau=x[i];
        cuoi=y[i];
        while(dau<=cuoi)
        {
            if(Co(dau)==false)
            {
                tong+=a;
                dau++;
            }
            else
            {
                tien=abs(dau-Cuoi())*b;
                tong+=tien;
                dau=Cuoi()+1;
            }
        }
        cout << tong << endl;
        tong=0;
    }
    return 0;
}
