// By sanskar27jain

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long n=1000000;

vector<bool> sieve(n+1,false);
vector<long> prime;

bool bsearch(vector<long>* prime,long m,long item){
    long beg=0,end=m-1;
    long mid;
    while(beg<=end){
        mid=(beg+end)/2;
        if((*prime)[mid]==item)
            return true;
        else if((*prime)[mid]>item)
            end=mid-1;
        else
            beg=mid+1;
    }
    return false;
}

int main() {
    sieve[0]=sieve[1]=true;
    for(long i=2;i<=n;i++){
        if(sieve[i]==false){
            int c=i*2;
            while(c<=n){
                sieve[c]=true;
                c+=i;
            }
        }
    }


    for(long i=2;i<=n;i++){
        if(sieve[i]==false){
            long digits=0,j=i;
            long flag=1;
            while(j!=0){
                j/=10;
                digits++;
            }
            j=i;
            j=int((j/pow(10,digits-1)));
            if(j==4||j==6||j==8||j==9||j==1){
                flag=0;
                goto lb;
            }
            j=i;
            if(j>9){
                while(j>9){
                    if(j%10==2||j%10==4||j%10==5||j%10==6||j%10==8||j%10==0){
                        flag=0;
                        break;
                    }
                    j/=10;
                }
            }
            lb:
            if(flag)
                prime.push_back(i);
        }
    }
    long m;
    unsigned long long sum=0;
    cin>>m;
    for(long j=4;(prime[j]<m)&&(j<prime.size());j++){
            long num=prime[j],flag1=0,flag2=0,digits=0;
            while(num!=0){
                num/=10;
                digits++;
            }
            num=prime[j];
            while(num>=10){
                num/=10;
                if(sieve[num]){
                    flag1=1;
                    break;
                }
            }
            num=prime[j];
            while(num>=10){
                num=num-int((num/pow(10,digits-1)))*int(pow(10,digits-1));
                if(sieve[num]){
                    flag2=1;
                    break;
                }
                digits--;
            }
            if(flag1==0&&flag2==0){
                sum+=prime[j];
             }

    }
    cout<<sum;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
