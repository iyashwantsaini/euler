#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// int pallin(int data)
// {
//     int n = data;
//     int num = data;
//     int rev, digit;
//     do
//     {
//         digit = num % 10;
//         rev = (rev * 10) + digit;
//         num = num / 10;
//     } while (num != 0);
//     if (n == rev)
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

int main()
{
    int maxp = 0;
    for (int i = 999; i >= 100; i--)
    {
        for (int j = 999; j >= 100; j--)
        {
            int prod = i * j;
            string prodstr = to_string(prod);
            if (
                (prodstr == string{prodstr.rbegin(),prodstr.rend()}) &&
                (prod > maxp))
            {
                maxp = prod;
            }
        }
    }

    cout << maxp;
}