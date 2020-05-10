#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll num=0;
    int count=0;
    for(ll j=1;num==0;j++){
        count=0;
        for(ll i=1;i<=20;i++){
            if(j%i==0){
                count+=1;
            }else{
                break;
            }
        }
        if(count==20){
            num=j;
            break;
        }
    }
    cout<<num;
}