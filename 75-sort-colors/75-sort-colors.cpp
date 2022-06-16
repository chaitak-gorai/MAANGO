class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=1;i<nums.size();i++){
            int data=nums[i];
            int j=i;
            while(j>0 && nums[j-1]>data){
                nums[j]=nums[j-1];
                j--;
            }
            nums[j]=data;
        }
      
    }
};