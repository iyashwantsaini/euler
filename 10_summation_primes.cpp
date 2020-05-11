#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int *sieve=new int[2000000];
    sieve[0]=0;
    sieve[1]=0;
    for(int i=2;i<2000000;i++){
        sieve[i]=1;
    }

    for(int i=2;i*i<2000000;i++){
        if(sieve[i]==1){
            for(int j=i*i;j<2000000;j+=i){
                sieve[j]=0;
            }
        }
    }
    ll sum=0;
    for(int i=2;i<2000000;i++){
        if(sieve[i]==1){
            sum+=i;
        }
    }
    cout<<sum;
}