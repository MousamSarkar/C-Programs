/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.



Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
Example 2:

Input: nums = [3,2,4], target = 6
Output: [1,2]
Example 3:

Input: nums = [3,3], target = 6
Output: [0,1]


Constraints:

2 <= nums.length <= 104
-109 <= nums[i] <= 109
-109 <= target <= 109
Only one valid answer exists.*/

#include <vector>
#include <map>
#include <iostream>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

    int i, j, k, sum = 0;
    vector<int> store;
    bool flag = false;
    int length = nums.size();

    map<int, int> indexMap;
    for (int i = 0; i < length; i++)
    {
        int requiredNum = (int)(target - nums[i]);
        map<int, int> :: iterator it;
        int p =  indexMap.count(requiredNum);
        //it = indexMap.find(requiredNum);
        //if (int(it->first) == requiredNum)
        if (p == 1)
        {

            // int toReturn[] = {it->first, i};+
            it = indexMap.find(requiredNum);
            store.push_back(it->second);
            store.push_back(i);
            return store;
        }

        indexMap.insert(indexMap.end(),pair<int, int>(nums[i], i));
    }
    return store;
}


int main()
{
    int i, length, target, input;

    vector<int> vec;
    cout << "Enter the number of variables :";
    cin >> length;

    cout << "Enter the target value :";
    cin >> target;

    cout << "Enter the values :";
    for (i = 0; i < length; i++)
    {
        cin >> input;
        vec.push_back(input);
    }

    vector<int> result = twoSum(vec, target);

    if (result.size() == 2)
    {
        for (auto i = result.begin(); i != result.end(); ++i)
            cout << *i << " ";
    }
    else
        cout << "No such values available";
}