class Solution{
	public:
		int min_operations(vector<int> nums){ 
            vector<int> lis;
            for(int i = 0; i < nums.size(); i++){
                nums[i] -= i;
                int pos = upper_bound(lis.begin(), lis.end(), nums[i]) - lis.begin();
                if(pos == lis.size()) lis.push_back(nums[i]);
                else lis[pos] = nums[i];
            }
            return nums.size() - lis.size();
    	}
};
