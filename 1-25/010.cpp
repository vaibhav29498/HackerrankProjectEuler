#include <iostream>
#include <cmath>
#define lim 2000000
using namespace std;

int P[lim/2+1];
long int A[lim+1];

int main()
{
    long int T,N,i,ind;
    for (i=3;i<=sqrt(lim);i+=2)
    {
        if (!P[i/2])
        {
            ind=i/2+i;
            while(ind<=lim/2)
            {
                P[ind]=1;
                ind+=i;
            }
        }
    }
    A[1]=0;
    A[2]=2;
    for (i=3;i<=lim;i+=2)
    {
        if (!P[i/2])
            A[i]=A[i-1]+i;
        else
            A[i]=A[i-1];
        A[i+1]=A[i];
    }
    cin >> T;
    while(T--)
    {
        cin >> N;
        cout << A[N] << endl;
    }
    return 0;
}
