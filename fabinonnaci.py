n=int(input())
f0=1
f1=2
f2=0
for i in range(n-1):
        f2=f1+f0
        f0=f1
        f1=f2

print(f0,f1)
n=round(f0/2)    
print(n)
sn=round(int((n/2))*int((2+f0)))
print(sn)


