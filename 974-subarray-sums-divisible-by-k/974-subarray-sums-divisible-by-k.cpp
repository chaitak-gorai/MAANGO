class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        vector <int> remainder(k,0);
        int sum=0;
        for(int x:nums){
            sum+=(x%k+k)%k;
            remainder[sum%k]++;
            
        }
        int result=remainder[0];
        for(int y:remainder){
            result+=(y*(y-1))/2;
        }
        return result;
    }
};