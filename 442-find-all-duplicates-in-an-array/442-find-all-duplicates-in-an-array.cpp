class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       vector<int> pre(nums.size()+1,0);
        for(int x:nums){
            pre[x]++;
        }
        vector<int> result;
        for(int i=1;i<=nums.size();i++){
            if(pre[i]>1){
                result.push_back(i);
            }
        }
        return result;
    }
        
};