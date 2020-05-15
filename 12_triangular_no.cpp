#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll count=0;
    ll num=0;
    ll nodcount=0;
    // 29772186 onwards try
    // 17716128
    for(ll i=1;;i++){
        num+=i;
        cout<<num<<" : ";
        // count+=1;

        nodcount=0;
        for(ll j=1;j<=ll(sqrt(num));j++){
            if(num%j==0){
                // cout<<j<<" ";
                nodcount+=2;
            }
        }
        if (ll(sqrt(num)) * ll(sqrt(num)) == num) {
            nodcount--;
        }
        cout<<" diviors : "<<nodcount<<"\n";
        if(nodcount>500){
            cout<<num;
            break;
        }
    }
}