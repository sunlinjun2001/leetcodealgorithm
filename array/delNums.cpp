#include <iostream>
using namespace std;
#include <vector>
#include <unordered_map>
//4.删除重复的元素
class Solution {
public:
    /**int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> hashtable;
        vector<int>::iterator it = nums.begin();
        for (it; it != nums.end(); it++)
        {
            auto iter = hashtable.find(*it);
            if (iter != hashtable.end())
            {
                nums.erase(it);
                it--;
            }
            else
            {
                hashtable[*it] = 0;
            }
        }
        return nums.size();
    }
    */
   //更好的思路
   int removeDuplicates(vector<int>& nums)
   {
        
   }
};

void goSolution(vector<int>& nums)
{
    Solution solve;
    int size = solve.removeDuplicates(nums);
    cout << size << endl;
    cout << "数组中的元素是" << endl;
    for(auto iter : nums)
    {
        cout << iter << " ";
    }
}

int main()
{
    vector<int> nums = { 1, 1, 2 };
    goSolution(nums);
    system("pause");
}