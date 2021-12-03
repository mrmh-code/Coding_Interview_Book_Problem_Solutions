#include <bits/stdc++.h>
using namespace std;

void Maximum_Unsorted_SubArray(int arr[],int NumberOfElements){
        vector<int>vec;
        int startingindex=-1,EndingIndex=-1,StartingValue;
        for(int i=0; i<NumberOfElements-1; i++){
            if(arr[i]>arr[i+1])
            {
                 startingindex=i;
                 StartingValue=arr[i];

            }
        }

        for(int i=NumberOfElements-1; i>=0; i--){
            if(StartingValue>arr[i]){
                EndingIndex=i;
                 break;
            }
        }
        if(startingindex!=-1 && startingindex!=-1){
            vec.push_back(startingindex);
            vec.push_back(EndingIndex);
        }
         if(vec.size()==0){
             cout<<"-1"<<endl;
         }else{
             for(auto u: vec){
                 cout<<u<<" ";
             }
             cout<<endl;
         }

}

int main()
{
    int NumberOfElements;
    cin>>NumberOfElements;
    int arr[NumberOfElements];
    for(int i=0; i<NumberOfElements; i++){cin>>arr[i];}
     Maximum_Unsorted_SubArray(arr,NumberOfElements);
}