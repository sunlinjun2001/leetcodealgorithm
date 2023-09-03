#include<iostream>
using namespace std;
#include <vector>
//35. ��������λ��
//����һ�����������һ��Ŀ��ֵ�����������ҵ�Ŀ��ֵ�������������������Ŀ��ֵ�������������У����������ᱻ��˳������λ��
//�����ʹ��ʱ�临�Ӷ�Ϊ O(log n) ���㷨��
class Solution {
public:
    //�ҵ��뷨
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
    //��ȷ˼·��ʹ�ö��ַ������������⣬��Ϊ�����Ǹ��ݴ�С�������кõ�
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
    cout << "Ԫ����������±�Ϊ" << index << endl;
    cout << (13 >> 1) << endl;
    system("pause");
}