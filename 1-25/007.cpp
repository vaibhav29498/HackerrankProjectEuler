#include <iostream>
#include <cmath>
using namespace std;

int A[10002];

bool isPrime(int N)
{
    for (int i=2;i<=sqrt(N);++i)
        if (N%i==0)
            return false;
    return true;
}

int main()
{
    int T,N,m=0;
    A[0]=1;
    cin >> T;
    while (T--)
    {
        cin >> N;
        if (!A[N])
            for (int i=A[m]+1;!A[N];++i)
            {
                if (isPrime(i))
                    A[++m]=i;
            }
        cout << A[N] << endl;
    }
    return 0;
}