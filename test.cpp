#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
             
        int cnt=1;
        vector<string>ans;
        for(int i=0; i<score.size(); i++){
            for(int j=0; j<score.size()-1; j++){
                if(score[i]<score[j]){
                    cnt++;
                }
            }
            if(cnt==1){
                ans.push_back("Gold Medal");
            }
          else if(cnt==2){
                ans.push_back("Silver Medal");
            }
            else if(cnt==3){
                ans.push_back("Bronze Medal");
            }else{
                ans.push_back(to_string(i+1));
            }
            cnt=1;
        }

        return ans;
    }
};

int main()
{
    vector<int>vec={5,4,3,2,1};
    Solution st;
    vector<string>v=st.findRelativeRanks(vec);

    for(auto u: v){
        cout<<u<<" ";
    }
    cout<<endl;

}