#include<bits/stdc++.h>
#include<string.h>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;x<n?i<=n:i>=n;x<n?i++:i--)
#define em emplace_back
#define mt  make_tuple
using namespace std;
typedef vector<int>vi;
typedef vector<vi>vii;
typedef pair<int,int>pi;


int main(){
    int n,k;
    cin>>n,k;

    int result=n;
    int p;
   for(p=2;p*p<=n;p++){
       
       if(n%p==0){
           while(n%p==0){
               n/=p;
           }
           result-=result/p;
       }
   }

   if(n>1){
       result-=result/n;
   }

   cout<<int(result)<<"\n";

 
}