#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int subarraySum(vector<int> &nums, int k)
{
    unordered_map<int, int> mp;
    int pf = 0;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        pf += nums[i];
        if (mp.count(pf - k) == 1)
        {
            count++;
            if (mp.count(pf) == 0)
            {
                mp.insert({pf, 0});
            }
        }
        else if (pf == k)
        {
            count++;
        }
        else
        {
            mp.insert({pf, 0});
        }
    }
    return count;
}
int main()
{
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(-1);
    v1.push_back(0);
    // v1.push_back(2);
    // v1.push_back(-3);
    // v1.push_back(1);
    // v1.push_back(4);
    // v1.push_back(2);
    int k = 0;
    int x = subarraySum(v1, k);
    cout << x;
}