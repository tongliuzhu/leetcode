#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = nums.size()*(nums.size()+1)/2;
        for(auto i : nums) {
            sum -= i;
        }
        return sum;
    }
};