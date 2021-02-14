#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        //use two pointer method,
        if(prices.size() < 2)
            return 0;

        int total = 0;
        int p1 = 0;
        int p2 = 0;
        while(p2 < prices.size())
        {
            //p2 is smaller than p1;
            if(prices[p1] >= prices[p2])
            {
                p1 = p2;
            }
            else
            {
                total += (prices[p2] - prices[p1]);
                p1 = p2;
            }

            p2++;
        }

        return total;
    }
};

int main()
{
    // vector<int> input = {7,1,5,3,6,4};
    vector<int> input = {1,2,3,4,5};
    Solution obj;
    cout << obj.maxProfit(input);

    return 0;
}



