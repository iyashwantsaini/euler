#include<bits/stdc++.h>
using namespace std;

long long int fibevensum(long int start,long int end){
    long int a=start;
    long int b=start;
    long int temp=0;
    long long int sum=0;
    for(long int i=a;b<end;i++){
        temp=a;
        a=b;
        b=temp+b;
        if(b%2==0){
            sum+=b;
        }
    }
    return sum;
}
int main(){
    long long int sum=0;
    sum=fibevensum(1,4000000);
    cout<<sum;
}