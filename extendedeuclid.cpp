#include<iostream>
using namespace std;
long long int  expo(int ,int );
long long int modularExponentiation(long  long int ,long  long int,long  long int );
long  long int modInverse(long long int ,long long  int );
void extendedEuclid(long long int ,long long int );

int d,z,y;
int main(){
  long long int x,n,c,m;
  cin>>x>>n>>c>>m;
  long long  int r1,r2,r3,result;
  r1=modularExponentiation(x,n,m);
  r2= modInverse(c,m);
  r3=(r1%m)*(r2%m);
  r3=r3%m;
 cout<<r3<<"\n";


 
return 0;
}


void extendedEuclid(long long int c,long long int m)
{
if(m == 0)
{
d = c;
z = 1;
y = 0;
}
else
{
extendedEuclid(m, c%m);
long long int temp = z;
z = y;
y = temp - (c/m)*y;
}
}
long long int modInverse(long  long int c,long long int M)
{
extendedEuclid(c,M);
return (z%M+M)%M;
}


long  long int modularExponentiation(long  long int x,long  long int n,long  long int M)
{
   if(n==0)
        return 1;
    else if(n%2 == 0)        //n is even
        return modularExponentiation((x*x)%M,n/2,M);
    else                             //n is odd
        return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;
}

/*
 result=result/c;
 cout<<result<<"\n";

  result=result%m;
 cout<<result<<"\n";

  cout<<result<<"\n";

int expo(int x,int n){
    if(n==0){
        return 1;
    }
    else if(n%2==0){
      return expo(x*x,n/2);
    }
    else{
       return x*expo(x,n-1);
    }
}
*/