#include <bits/stdc++.h>
using namespace std;

int main()
{
    int NumberOfElements;
    cin>>NumberOfElements;
    int arr[NumberOfElements];
    for(int i=0; i<NumberOfElements; i++){cin>>arr[i];}
    int L=0,R=NumberOfElements-1,mid,target,resin;
    cin>>target;
    int ans=NumberOfElements;
    while (L<=R)
    {
        mid=(L+R)/2;

        if(arr[mid]>=target){
           ans=min(ans,mid);
            R=mid-1;
        }
        else{
            L=mid+1;
        }

        if(arr[mid]<target){
            resin=mid+1;
        }

    }
    if(resin!=-1){
        cout<<resin<<endl;
        return 0;
    }
    cout<<ans<<endl;
    
    


}