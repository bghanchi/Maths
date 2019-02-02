#include<bits/stdc++.h>
#include<string.h>
#include<tuple>
#define all(c) c.begin(),c.end()
#define tr(i,x,n) for(int i=x;x<n?i<n:i>=0;x<n?i++:i--)
#define pb push_back
#define mt make_pair
#define em emplace_back
#define ll long long int
#define sz(s) s.size()
#define debug(s) cout<<s<<endl;
using namespace std;

typedef vector<ll>vi;
typedef vector<vi>vii;
typedef pair<ll,ll>pi;
typedef tuple<ll,ll,ll>ti;


ll intersectionCardinality(vector<ll> indices);

int main(){

 ll n;
 cin>>n;
 
 ll result=0;

for(ll b = 0; b < (1 << n); ++b)
{
     vector<ll> indices;
     for(ll k = 0; k < n; ++k)
     {
          if(b & (1 << k))
          {      
                cout<<b<<" "<<(1<<k)<<endl; 
               indices.push_back(k);
          }
     }
     ll cardinality = intersectionCardinality(indices);
//     if(indices.size() % 2 == 1) result += cardinality;
  //   else result -= cardinality;
}    

}