#include <bits/stdc++.h>
using namespace std;
#define R 3
#define C 3

void spiral_Order_Matrix(int EndingRowIndex, int EndingColumIndex, int Matrix[R][C])
{
        int i,StartingRowIndex=0,StartingColumIndex=0;

        while (StartingRowIndex<EndingRowIndex && StartingColumIndex< EndingColumIndex)
        {
            for(i=StartingColumIndex; i<EndingColumIndex; ++i){
                cout<<Matrix[StartingRowIndex][i]<<" ";
            }

            StartingRowIndex++;

            for(i=StartingRowIndex; i<EndingRowIndex; ++i){
                cout<<Matrix[i][EndingColumIndex-1]<<" ";
            }

            EndingColumIndex--;

            if(StartingRowIndex<EndingRowIndex){
                for(int i=EndingColumIndex-1; i>=StartingColumIndex; --i){
                    cout<<Matrix[EndingRowIndex-1][i]<<" ";
                }
                EndingRowIndex--;
            }
        }

        if(StartingColumIndex<EndingColumIndex){
            for(i=EndingRowIndex-1; i>=StartingRowIndex; --i){
                cout<<Matrix[i][StartingColumIndex]<<" ";
            }
            StartingColumIndex++;
        }

        
    
}
int main()
{
    int Matrix[R][C]={{1,2,3,},{4,5,6},{7,8,9}};
    spiral_Order_Matrix(R,C,Matrix);
}