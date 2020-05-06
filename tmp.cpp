#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[l] <= nums[mid]) {
                if (nums[l] <= target && target < nums[mid])
                    r = mid - 1;
                else
                    l = mid + 1;
            } else {
                if (nums[mid] < target && target <= nums[r])
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }
        return -1;
    }
};

void test(string test_name, vector<int> &nums, int target, int expected)
{
    Solution s;
    if (s.search(nums, target) == expected) {
        cout << test_name << " success." << endl;
    } else {
        cout << test_name << " failed." << endl;
    }
}

int main()
{
    vector<int> nums1 = {4,5,6,7,0,1,2};
    int target1 = 0;
    int expected1 = 4;
    test("test1", nums1, target1, expected1);

    vector<int> nums2 = {4,5,6,7,0,1,2};
    int target2 = 3;
    int expected2 = -1;
    test("test2", nums2, target2, expected2);

    return 0;
}