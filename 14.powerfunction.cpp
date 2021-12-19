#include <bits/stdc++.h>
using namespace std;

int power(int a, int n){
    if(n==1){
        return a;
    }
    int ans=1;
    while (n)
    {
         
        if(n%2==1){
            ans*=a;
            n-=1;
        }else{
            n/=2;
         
            a*=a;

        }
    }
    return ans;
}

int main()
{
    cout<<power(2,10)<<endl;
}
