#include <iostream>
using namespace std;
#include <vector>
/*
 *27.�Ƴ�Ԫ��
 *����һ������nums��һ��ֵval������Ҫԭ���Ƴ�������ֵ����val��Ԫ�أ��������Ƴ���������³��ȡ�
 *��Ҫʹ�ö��������ռ�,������ʹ��O(1)����ռ䲢ԭ���޸��������顣
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
    cout << "����" << length << endl;
    system("pause");
}
