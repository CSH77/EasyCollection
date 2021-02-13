#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.empty())
            return 0;
        
        //use two pointer method,
        int p1 = 0;
        int p2 = 0;

        while(p2 < nums.size())
        {
            if(nums[p1] != nums[p2])
            {
                p1++;
                nums[p1] = nums[p2];
                
            }
            p2++;
        }    
        //resize vector.
        nums.resize(p1 + 1);
        return nums.size();
    }
};

int main()
{
    
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    Solution obj;
    int answer = obj.removeDuplicates(nums);

    for(auto item : nums)
    {
        cout << item << ", ";
    }
    cout << endl;
        
    return 0;
}



