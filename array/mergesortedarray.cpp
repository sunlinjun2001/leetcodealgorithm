#include <iostream>
#include <vector>
#include <algorithm>
//88.合并两个有序数组
/* 给你两个按非递减顺序排列的整数数组nums1和nums2，另有两个整数m和n ，分别表示nums1和nums2中的元素数目。
请你合并nums2到nums1中，使合并后的数组同样按非递减顺序排列。
注意：最终，合并后数组不应由函数返回，而是存储在数组nums1中。
为了应对这种情况，nums1 的初始长度为m+n，其中前m个元素表示应合并的元素，后n个元素为0 ，应忽略。nums2的长度为n */
class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {

        //思路1、将nums2放在nums1的后面。然后再将nums1排序。
        // for (int i = 0; i < n; i++){
        //     nums1[i + m] = nums2[i];
        // }
        // std::sort(nums1.begin(), nums1.end());

        //思路2、重新定义一个数组，分别取出nums1和nums2中的最小数，依次对比，按照正确的顺序的放入新的数组中
        /* int nums1_index = 0, nums2_index = 0;
        int sortedArray[m + n];
        int temp = 0;
        while (nums1_index < m || nums2_index < n)
        {
            if(nums1_index == m)
            {
                temp = nums2[nums2_index++];
            }
            else if(nums2_index == n)
            {
                temp = nums1[nums1_index++];
            }
            else if(nums1[nums1_index] > nums2[nums2_index])
            {
                temp = nums2[nums2_index++];
            }
            else
            {
                temp = nums1[nums1_index++];
            }
            sortedArray[nums1_index + nums2_index - 1] = temp;
        } */
        
        /* 思路3、方法二中，之所以要使用临时变量，是因为如果直接合并到数组 nums1 
        中，nums1 中的元素可能会在取出之前被覆盖。那么如何直接避免覆盖 nums1
        中的元素呢？观察可知，nums1 的后半部分是空的，可以直接覆盖而不会影响结果。
        因此可以指针设置为从后向前遍历，每次取两者之中的较大者放进nums1 */
        int nums1_index = m - 1, nums2_index = n - 1;
        int temp = 0;
        int index = nums1_index + nums2_index + 1;
        while (nums1_index >= 0 || nums2_index >= 0)
        {
            if(nums1_index < 0)
            {
                temp = nums2[nums2_index--];
            }
            else if (nums2_index < 0)
            {
                temp = nums1[nums1_index--];
            }
            else if(nums1[nums1_index] > nums2[nums2_index])
            {
                temp = nums1[nums1_index--];
            }
            else
            {
                temp = nums2[nums2_index--];
            }
            nums1[index--] = temp;
        }
    }
};

void goMerge()
{
    std::vector<int> nums1 = { 1, 2, 3, 0, 0, 0 };
    std::vector<int> nums2 = { 2, 5, 6 };
    int m = 3, n = 2;
    Solution s;
    s.merge(nums1, m, nums2, n);
}

int main()
{
    goMerge();
    system("pause");
}