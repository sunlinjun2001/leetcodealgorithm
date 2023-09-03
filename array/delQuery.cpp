#include <iostream>
using namespace std;
#include <vector>
/*
 *27.移除元素
 *给你一个数组nums和一个值val，你需要原地移除所有数值等于val的元素，并返回移除后数组的新长度。
 *不要使用额外的数组空间,你必须仅使用O(1)额外空间并原地修改输入数组。
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for (vector<int>::iterator it = nums.begin(); it < nums.end(); it++)
        {
            if (*it == val)
            {
                nums.erase(it);
                it--;
            }
        }
        return nums.size();
    }
};
int main()
{
    vector<int> nums = {3,2,3,2};
    int val = 2;
    Solution solve;
    int length = solve.removeElement(nums, val);
    cout << "长度" << length << endl;
    system("pause");
}
