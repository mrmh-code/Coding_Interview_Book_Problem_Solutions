#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals,vector<int>newIntervals) {
        vector<vector<int>>ans;
        if(intervals.size()==0){
            ans.push_back(newIntervals);
            return ans;
        }

        
        for(int i=0; i<=intervals.size(); i++){
            if(intervals[i][1]>newIntervals[1]){
                ans.push_back(newIntervals);
            }else{
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};

int main()
{

}