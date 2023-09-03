#include <iostream>
#include <vector>
#include <algorithm>
//88.�ϲ�������������
/* �����������ǵݼ�˳�����е���������nums1��nums2��������������m��n ���ֱ��ʾnums1��nums2�е�Ԫ����Ŀ��
����ϲ�nums2��nums1�У�ʹ�ϲ��������ͬ�����ǵݼ�˳�����С�
ע�⣺���գ��ϲ������鲻Ӧ�ɺ������أ����Ǵ洢������nums1�С�
Ϊ��Ӧ�����������nums1 �ĳ�ʼ����Ϊm+n������ǰm��Ԫ�ر�ʾӦ�ϲ���Ԫ�أ���n��Ԫ��Ϊ0 ��Ӧ���ԡ�nums2�ĳ���Ϊn */
class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {

        //˼·1����nums2����nums1�ĺ��档Ȼ���ٽ�nums1����
        // for (int i = 0; i < n; i++){
        //     nums1[i + m] = nums2[i];
        // }
        // std::sort(nums1.begin(), nums1.end());

        //˼·2�����¶���һ�����飬�ֱ�ȡ��nums1��nums2�е���С�������ζԱȣ�������ȷ��˳��ķ����µ�������
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
        
        /* ˼·3���������У�֮����Ҫʹ����ʱ����������Ϊ���ֱ�Ӻϲ������� nums1 
        �У�nums1 �е�Ԫ�ؿ��ܻ���ȡ��֮ǰ�����ǡ���ô���ֱ�ӱ��⸲�� nums1
        �е�Ԫ���أ��۲��֪��nums1 �ĺ�벿���ǿյģ�����ֱ�Ӹ��Ƕ�����Ӱ������
        ��˿���ָ������Ϊ�Ӻ���ǰ������ÿ��ȡ����֮�еĽϴ��߷Ž�nums1 */
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