#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int>& nums) {
        size_t n = nums.size();
        std::vector<int> ans(n);

        size_t i = 0;
        while (i < n) {
            ans[i] = nums[i] * nums[i];
            i++;
        }

        std::sort(ans.begin(), ans.end());
        return ans;
    }
};
