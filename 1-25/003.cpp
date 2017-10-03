//
// Created by Nishant
//
#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long n, i;
        cin >> n;
        long long max=0;
        while (n%2 == 0)
        {
            max=2;
            n = n/2;
        }

        for ( i = 3; i <=sqrt(n); i = i+2)
        {
            // While i divides n, print i and divide n
            while (n%i == 0)
            {
                if(max<i)
                    max=i;
                n = n/i;
            }
        }

        // This condition is to handle the case when n
        // is a prime number greater than 2
        if (n > 2)
        {   if(max<n)
                max=n;
        }
        cout<<max<<"\n";
    }
    return 0;
}
