class Solution {
public:
    int minMoves(vector<int>& nums) {
        int maxx = *max_element(nums.begin(), nums.end());
        int count = 0;
        for(auto i: nums){
            if(i != maxx){
                int a = maxx-i;
                count+=a;
            }
        }
        return count;
    }
};