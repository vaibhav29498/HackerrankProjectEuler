#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int T,N,p,m,a,b,c,b1,b2,c1,c2;
    cin >> T;
    while (T--)
    {
        cin >> N;
        m=-1;
        for (a=1;a<=N/3;a++)
        {
            b1=(N*(N-2*a));
            b2=(2*(N-a));
            if (b1%b2==0)
            {
                b=b1/b2;
                c1=(N*N+2*a*a-2*a*N);
                c2=(2*(N-a));
                if (c1%c2==0)
                {
                    c=c1/c2;
                    p=a*b*c;
                    if (p>m)
                        m=p;
                }
            }
        }
            cout << m << endl;
    }
    return 0;
}