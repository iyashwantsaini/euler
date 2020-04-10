#include<bits/stdc++.h>
using namespace std;

// only even prime is : 2 
// all other prime are odd

long long largestprime(long long n){
    long long maxPrime=-1;
    
    // divide by 2
    while(n%2==0){
        maxPrime=2;
        n=n/2; // or n>>1; --right shift
    }
    
    //we have odd number now - skip even numbers and check for odd only
    for(int i=3;i<=sqrt(n);i+=2){
        while(n%i==0){
            maxPrime=i;
            n=n/i;
        }
    }
    if(n>2){
        maxPrime=n;
    }
    return maxPrime;

}

int main(){
    long long prime=0;
    long long num=600851475143;
    prime=largestprime(num);
    cout<<prime;
}