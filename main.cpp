#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <map>
#include <set>

using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        //check if array contains duplicated value;

        set<int> sset;
        for(int i = 0; i < nums.size(); i++)
        {
            //find value from set, if it exist return true immediatly.
            auto search = sset.find(nums[i]);
            if( search != sset.end() )
                return true;

            sset.insert(nums[i]);
        }

        return false;
    }
};

int main()
{
    vector<int> input = {1,1,1,3,3,4,3,2,4,2};
    Solution obj;
    cout << std::boolalpha << obj.containsDuplicate(input);

    return 0;
}



