def func(n):
    a=sorted(str(n))
    for i in range(2,k+1):
        if a!=sorted(str(i*n)):
            return False
    return True
        
n,k=map(int,raw_input().split())
for i in range(10,n+1):
    if(func(i)):
        print ' '.join(str(i*j) for j in range(1,k+1))
