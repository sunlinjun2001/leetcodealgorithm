#include<iostream>
using namespace std;
#include <vector>
//��һ
/* ����һ����������ɵķǿ���������ʾ�ķǸ��������ڸ����Ļ����ϼ�һ��
���λ���ִ�����������λ��������ÿ��Ԫ��ֻ�洢�������֡�
����Լ���������� 0 ֮�⣬��������������㿪ͷ��*/
class Solution {
public:
    //�Լ���˼·
    /* vector<int> plusOne(vector<int>& digits) 
    {
        int index = digits.size() - 1;
        for (index; index >= 0; index--)
        {
            if (index == 0)
            {
                if (digits[index] == 9)
                {
                    digits[index] = 1;
                    digits.push_back(0);
                    return digits;
                }
                else
                {
                    digits[index]++;
                    return digits;
                }
            }
            else
            {
                if (digits[index] == 9)
                {
                    digits[index] = 0;
                } 
                else
                {
                    digits[index]++;
                    return digits;
                } 
            }
        }
        return {};
    } */
    //�ٷ�˼·
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for (int i = n - 1; i >= 0; --i) {
            if (digits[i] != 9) {
                ++digits[i];
                for (int j = i + 1; j < n; ++j) {
                    digits[j] = 0;
                }
                return digits;
            }
        }

        // digits �����е�Ԫ�ؾ�Ϊ 9
        vector<int> ans(n + 1);
        ans[0] = 1;
        return ans;
    }
};
void goPlusOne()
{
    vector<int> digits = {1, 2, 3};
    Solution s;
    vector<int> nums = s.plusOne(digits);
    vector<int>::iterator it = nums.begin();
    for (it; it != nums.end(); it++)
    {
        cout << "�����е�������" << *it << endl;
    }
    
}
int main(){
    goPlusOne();
    system("pause");
}