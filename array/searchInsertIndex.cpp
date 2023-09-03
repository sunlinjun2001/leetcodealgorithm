#include<iostream>
using namespace std;
#include <vector>
//35. 搜索插入位置
//给定一个排序数组和一个目标值，在数组中找到目标值，并返回其索引。如果目标值不存在于数组中，返回它将会被按顺序插入的位置
//请必须使用时间复杂度为 O(log n) 的算法。
class Solution {
public:
    //我的想法
    /* int searchInsert(vector<int>& nums, int target) {
        vector<int>::iterator it = nums.begin();
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == target)
            {
                return i;
            }
            else if (target < nums[i])
            {
                nums.insert(it + i, target);
                return i;
            }
        }
        nums.push_back(target);
        return nums.size() - 1;
    } */
    //正确思路，使用二分法来解决这个问题，因为数组是根据从小到大排列好的
    int searchInsert(vector<int>& nums, int target){
        int left, index = 0;
        int right = nums.size() - 1;
        while (left <= right){
            int mid = ((right - left) >> 1) + left;
            if (target <= nums[mid]){
                index = mid;
                right--;
            }
            else{
                left++;
            }
        }
        return index;
    }
};
int main()
{
    vector<int> nums = {1, 3, 5, 6};
    int target = 5;
    Solution s;
    int index = s.searchInsert(nums, target);
    cout << "元素在数组的下标为" << index << endl;
    cout << (13 >> 1) << endl;
    system("pause");
}