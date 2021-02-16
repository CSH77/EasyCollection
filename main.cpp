#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        vector<int> temp;
        int rotatingPoint = k % nums.size();

        //if rotating point is 0, do not need rotation.
        if(rotatingPoint == 0)
            return;

        //reverse input,
        reverse(nums.begin(), nums.end());

        //rotate again from first element to rotating point.
        int counter = 0;
        for(auto iter = nums.begin(); iter != nums.end(); iter++)
        {
            if(counter == rotatingPoint)
            {
                //reverse from start to this point.
                reverse(nums.begin(), iter);

                //reverse from rotating point to end of elements
                reverse(iter, nums.end());
            }
            counter++;
        }
    }
};

int main()
{
    // vector<int> input = {1,2,3,4,5,6,7};
    vector<int> input = {1,2};

    Solution obj;
    obj.rotate(input, 2);

    for(auto item : input)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
