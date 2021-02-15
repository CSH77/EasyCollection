#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        //rotate, use mod to calcualte rotating point
        // int rotatingPoint = nums.size() % k;

        vector<int> temp;
         int rotatingPoint = k;
        //rotation step is bigger than total size
        if(k > nums.size())
        {
            rotatingPoint = k % nums.size();
        }

        //count from rear.
        rotatingPoint = nums.size() - rotatingPoint;

        int i = rotatingPoint;
        while(i < nums.size())
        {
            temp.push_back(nums[i]);
            i++;
        }

        i = 0;
        while(i < rotatingPoint)
        {
            temp.push_back(nums[i]);
            i++;
        }
        // nums.assign(temp.begin(), temp.end());
        nums = temp;
    }
};

int main()
{
    vector<int> input = {1,2,3,4,5,6,7};

    Solution obj;
    obj.rotate(input, 3);

    for(auto item : input)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
