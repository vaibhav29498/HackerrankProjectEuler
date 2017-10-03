#include <iostream>
#include <cstring>
#define toInt(A) (int)A-48
using namespace std;

int main()
{
    int T,X,K,i,len,c,j;
    char N[1000];
    long int A,m;
    cin >> T;
    while (T--)
    {
        A=1;
        c=0;
        cin >> X >> K >> N;
        for (i=0;i<K;++i)
            A*=toInt(N[i]);
        m=A;
        len=strlen(N);
        for (;i<len;++i)
        {
            if (toInt(N[c]))
                A/=toInt(N[c++]);
            else
            {
                A=1;
                for (j=++c;j<i;++j)
                    A*=toInt(N[j]);
            }
            A*=toInt(N[i]);
            if (A>m)
                m=A;
        }
        cout << m << endl;
    }
    return 0;
}