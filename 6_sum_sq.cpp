#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    // square of sum
    ll sumsq=pow((100*(100+1))/2,2);
    // sum of squares
    ll sqsum=0;
    for(int i=1;i<=100;i++){
        sqsum+=pow(i,2);
    }
    cout<<sumsq-sqsum;
}