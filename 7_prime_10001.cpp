#include<bits/stdc++.h>
using namespace std;

int main(){
    int sieve[500000];
    vector<int> primes;

    sieve[0]=0;
    sieve[1]=0;

    for(int i=2;i<500000;i++){
        sieve[i]=1;
    }

    for(int i=2;i*i<500000;i++){
        for(int j=i*i;j<500000;j+=i){
            sieve[j]=0;
        }
    }

    // for(int i=0;i<20;i++){
    //     if(sieve[i]){
    //         cout<<i<<endl;
    //     }
    // }

    for(int i=0;i<500000;i++){
        if(sieve[i]){
            // cout<<i<<endl;
            primes.push_back(i);
        }
    }
    cout<<primes[10000];

}