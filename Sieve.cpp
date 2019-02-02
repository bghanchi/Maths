#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n+1];
     for(int i=1;i<=n;i++){
        a[i]=1;
    }
    for(int i=2;i*i<=n;i++){
        for(int j=i*2;j<=n;j+=i){
            a[j]=0;
        }
    }
    int count=0;
    for(int i=2;i<n;i++){
        if(a[i]==1){
            cout<<i<<" "<<"is prime"<<"\n";
            count++;
        }
    }
    cout<<count<<"\n";
return 0;
}