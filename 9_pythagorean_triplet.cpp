#include<bits/stdc++.h>
using namespace std;
typedef double d;

int main(){
    d b,a,c;
    // by manipulating given equations we got formula a=(500000-1000*b)/(1000-b)
    for(b=1;b<500;b++){
        a=(500000-(1000*b))/(1000-b);
        if(a<b&&a>=0&&a==int(a)){  //check if the value is int or not
            c=pow(pow(a,2)+pow(b,2),0.5);
            if(a<c&&b<c&&c==int(c)){  //check if the value is int or not
                break;
            }else{
                continue;
            }
        }else{
            continue;
        }
    }
    // cout<<a<<" "<<b<<" "<<c<<endl;
    cout<<float(a*b*c);

    // d p=10,q=3;
    // cout<<p/q<<endl;
    // cout<<int(p/q)<<endl;

}