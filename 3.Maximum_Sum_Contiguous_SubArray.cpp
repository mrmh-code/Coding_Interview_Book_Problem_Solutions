#include <bits/stdc++.h>
using namespace std;

int maximumSumContiguousSUbArray(int NumberOfElement,int Array[]){
    int currentSum=0,MaxSum=INT_MIN;
    for(int i=0; i<NumberOfElement; i++){
        currentSum+=Array[i];
        if(currentSum>MaxSum){
            MaxSum=currentSum;
        }
        if(currentSum<0){
            currentSum=0;
        }
    }

    return MaxSum;
}


int main()
{
    int arr[]={-1,-2,1,2,3,-5,4,5};
    int result=maximumSumContiguousSUbArray(8,arr);
    cout<<result<<endl;
}