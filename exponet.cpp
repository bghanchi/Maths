a, b, c,d = input().split()
a=int(a)
b=int(b)
c=int(c)
d=int(d)


def expo(x,n):
     if n==0:
         return 1
     elif n%2==0:
         return expo(x*x,n/2)
     else:
         return x*expo(x,n-1)     

e=expo(a,b)
print(e)             