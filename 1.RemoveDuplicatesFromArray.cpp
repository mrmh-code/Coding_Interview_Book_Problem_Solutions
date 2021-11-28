#include <bits/stdc++.h>
using namespace std;

int remove_duplication(int nums[],int n){
    int CountUniqueNumer=1;
    for(int i=1; i<n; i++){
        if(nums[i]!=nums[i-1]){
            CountUniqueNumer++;
        }
    }
    return CountUniqueNumer;
}


int main()
{
    int NumberOfNums;
    cin>>NumberOfNums;
    int nums[NumberOfNums];
    for(int i=0; i<NumberOfNums; i++){
        cin>>nums[i];
    }
    int UniqueNumber=remove_duplication(nums,NumberOfNums);
    cout<<UniqueNumber<<endl;
}