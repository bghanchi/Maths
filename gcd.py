a,b=map(int,input().split())




def gcd(a,b):
    if(b==0):
        return a
    else:
        return gcd(b,a%b)



if a>b:
    print(gcd(a,b)) 

else:
    print(gcd(b,a))               