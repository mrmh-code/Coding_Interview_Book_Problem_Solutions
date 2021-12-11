#include <bits/stdc++.h>
using namespace std;

int main()
{
    int NumberOfElement;
    cin>>NumberOfElement;
   
    vector<int>vec;

    for(int i=0; i<NumberOfElement; i++){
         int a;
         cin>>a;
         vec.push_back(a);

    }

    int target;
    cin>>target;
    int low=lower_bound(vec.begin(),vec.end(),target)-vec.begin();
 
    int up=upper_bound(vec.begin(),vec.end(),target)-vec.begin();
   
        cout<<low <<" "<<up<<endl;


}