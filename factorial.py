import math
t=int(input())
for i in range(t):
    n=int(input())
    a=math.factorial(n)%(1000000007)
    print(a)