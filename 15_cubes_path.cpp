#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;

// we can only go right an down ina 3*4 grid
// say we go 3 down and 4 right -- DDDRRRR
// total ways of topleft to bottom right = no. og possible arrangement of these D's and R's
// ans = 7C3

// ll fact(ll n){
//     if(n<=1){
//         return 1;
//     }else{
//         return n*fact(n-1);
//     }
// }

// ll combination(ll n,ll r){
//     cout<<fact(n)<<endl;
//     cout<<fact(n-r)<<endl;
//     cout<<fact(r)<<endl;
//     return fact(n)/(fact(n-r)*fact(r));
// }

// int main(){

//     ll rows=20;
//     ll cols=20;
//     cout<<combination(rows+cols,rows);

// }

#define MAX 500 
  
int multiply(int x, int res[], int res_size); 
  
// This function finds factorial of large numbers 
// and prints them 
void factorial(int n) 
{ 
    int res[MAX]; 
  
    // Initialize result 
    res[0] = 1; 
    int res_size = 1; 
  
    // Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n 
    for (int x=2; x<=n; x++) 
        res_size = multiply(x, res, res_size); 
  
    cout << "Factorial of given number is \n"; 
    for (int i=res_size-1; i>=0; i--) 
        cout << res[i]; 
} 
  
// This function multiplies x with the number  
// represented by res[]. 
// res_size is size of res[] or number of digits in the  
// number represented by res[]. This function uses simple  
// school mathematics for multiplication. 
// This function may value of res_size and returns the  
// new value of res_size 
int multiply(int x, int res[], int res_size) 
{ 
    int carry = 0;  // Initialize carry 
  
    // One by one multiply n with individual digits of res[] 
    for (int i=0; i<res_size; i++) 
    { 
        int prod = res[i] * x + carry; 
  
        // Store last digit of 'prod' in res[]   
        res[i] = prod % 10;   
  
        // Put rest in carry 
        carry  = prod/10;     
    } 
  
    // Put carry in res and increase result size 
    while (carry) 
    { 
        res[res_size] = carry%10; 
        carry = carry/10; 
        res_size++; 
    } 
    return res_size; 
} 

// Driver program 
int main() 
{ 
    factorial(100); 
    return 0; 
} 