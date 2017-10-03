#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T,N;
    long long int A;
    cin >> T;
    while(T--)
    {
        cin >> N;
        A=((3*pow(N,3)+2*pow(N,2)-3*N-2)*N)/12;
        cout << A << endl;
    }
    return 0;
}