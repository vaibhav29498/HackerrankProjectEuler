// BY {prateekkol21} copyright comment 

#include <stdio.h>

int isPrime(int n){
  int i;
  if (n<=0)
    return 0;
  if (n==2)
    return 1;
  for (i=2;i<=n/2;i++)
    if(n%i==0)
      return 0;
  return 1;
}

int main(){
  int a,b,n,max,supermax,maxa,maxb;
  supermax=0;
    int N;
    scanf("%d",&N);
  for (a=-999;a<N;a++){
    for (b=-999;b<N;b++){
      max=0;
      for (n=0;n<N;n++){
        if(!isPrime((n*n)+(a*n)+b))
          break;
        max++;
      }
      if (max>supermax){
        supermax=max;
        maxa=a;
        maxb=b;
      }
    }
  }  
  printf("%d %d\n",maxa,maxb);      
return 0;
}
