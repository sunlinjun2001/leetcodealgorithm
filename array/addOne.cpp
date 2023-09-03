#include<iostream>
using namespace std;
#include <vector>
//加一
/* 给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。
最高位数字存放在数组的首位，数组中每个元素只存储单个数字。
你可以假设除了整数 0 之外，这个整数不会以零开头。*/
class Solution {
public:
    //自己的思路
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
    //官方思路
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

        // digits 中所有的元素均为 9
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
        cout << "数组中的整数：" << *it << endl;
    }
    
}
int main(){
    goPlusOne();
    system("pause");
}