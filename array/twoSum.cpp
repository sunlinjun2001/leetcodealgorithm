#include<iostream>
using namespace std;

#include<vector>
#include<unordered_map>
//1.两数之和
class Solution 
{
public:
	/**
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> nums_index;
		int first_num_index = 0;
		int second_num_index = 1;
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
		{
			for (vector<int>::iterator s_it = (it+1); s_it != nums.end(); s_it++)
			{
				if ((*s_it) + (*it) == target)
				{
					nums_index.push_back(first_num_index);
					nums_index.push_back(second_num_index);
				}
				second_num_index++;
			}
			first_num_index++;
			second_num_index = first_num_index + 1;
		}
		return nums_index;
	}
	*/
	/**
	vector<int> twoSum(vector<int>& nums, int target)
	{
		vector<int> nums_index;
		for (int i = 0; i < nums.size() - 1; i++)
		{
			for (int j = i + 1; j < nums.size(); j++)
			{
				if (nums[i] + nums[j] == target)
				{
					nums_index.push_back(i);
					nums_index.push_back(j);
				}
			}
		}
		return nums_index;
	}*/
	/**
	vector<int> twoSum(vector<int>& nums, int target)
	{
		int nums_size = nums.size();
		for (int i = 0; i < nums_size-1; i++)
		{
			for (int j = i + 1; j < nums_size; j++)
			{
				if (nums[i] + nums[j] == target)
				{
					return { i,j };
				}
			}
		}
		return {};
	}*/
	vector<int> twoSum(vector<int>& nums, int target)
	{
		unordered_map<int, int> hashtable;
		for (int i = 0; i < nums.size(); i++)
		{
			auto iter = hashtable.find(target - nums[i]);
			if (iter != hashtable.end())
			{
				return {iter->second, i};
			}
			hashtable[nums[i]] = i;
		}
		return {};
	}
};

int main()
{
	Solution solve;
	vector<int> nums;
	int target = 9;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);
	vector<int> nums_index = solve.twoSum(nums, target);
	for (auto iter : nums_index)
	{
		//cout << iter << " ";
		printf("下标%d \n", iter);
	}
	system("pause");
}