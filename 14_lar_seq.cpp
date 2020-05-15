#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{   
    ll max=1;
    ll count=1;
    ll my_num=1;
    for (int i = 1; i <= 1000000; i++)
    {   
        count=1;
        ll num = i;
        // cout << num<<" ";

        while (num > 1)
        {
            if (num % 2 == 0)
            {
                num = num / 2;
                // cout << num<<" ";
            }
            else
            {
                num = num * 3 + 1;
                // cout << num<<" ";
            }
            count++;
        }
        
        if(count>max){
            max=count;
            my_num=i;
        }
        // cout << "\n";
    }
    // cout<<max<<endl;
    cout<<my_num<<endl;
}