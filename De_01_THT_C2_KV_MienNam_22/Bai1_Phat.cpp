#include <iostream>
#include <cmath>
using namespace std;
unsigned long long a1,b1,a2,b2,a3,b3,x,y,z;
unsigned long long A[99];
int dem,i,f;
int main()
{

    cin >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;
    i=0;
    f=0;
    for(z=a3;z<=b3;z++)
        for(x=a1;x<=b1;x++)
            for(y=a2;y<=b2;y++)
            {

                if(x*y==z)
                {
                    dem++;
                    i++;
                    A[i]=x;
                    A[i+1]=y;
                    A[i+2]=z;
                    i+=2;
                }
            }
    cout <<"Co " << dem << " bo thoa man la: " << endl;
    for(int j=1;j<=i;j++)
    {
    f++;
    if(f==1) cout << "(" << A[j] << ", ";
    else if (f==3) cout << A[j] << ");" << endl;
    else cout << A[j] << ", ";
    if (f==3) f=0;
    }

    return 0;
}
