class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int len = nums.size();
        int i = 0;
        while(i<len){
            int correctidx =  nums[i]-1;
            if(nums[i] == nums[correctidx]) i++;
            else 
            swap(nums[i] , nums[correctidx]);
        }
        vector<int>v;
        for(int i=0; i< len; i++){
            if(nums[i] != i+1){
                v.push_back(nums[i]);
                v.push_back(i+1);
            }
        }
        return v;
    }
};