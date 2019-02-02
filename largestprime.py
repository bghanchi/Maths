n=int(input())
t=int(n/2)

def isPrime(n):
    for i in range(2,int(n**0.5)+1):
        if n%i==0:
            return False

    return True

while t>0:
    if isPrime(t) and n%t==0:
        print(t)
    print(t)    
    t=t-1    

