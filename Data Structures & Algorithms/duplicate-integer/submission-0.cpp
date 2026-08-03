# include<vector>
# include<unordered_set>
using namespace std

class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>seen;
        if(int num: nums){

            if(seen.find(nums)!=seen.end())
            return True
        }
         seen.insert(num);
    }
     return False
};