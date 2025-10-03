class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mpp;
        for(auto &i : nums) mpp[i]++;
        int maxifreq = 0,count = 0;
        for(auto &it : mpp) {
            if(it.second > maxifreq) {
                maxifreq = it.second;
                count = 1;
            }
            else if(it.second == maxifreq) {
                count += 1;
            }

        }
        return maxifreq*count;
    }
};
