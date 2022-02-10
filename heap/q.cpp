#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 void wiggleSort(vector<int> &nums) {
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        for(int i=1;i<nums.size();i=i+2){
            int s=nums[j];
            int x=j;
            while(x>i){
                nums[x]=nums[x-1];
                x--;
            }
            nums[x]=s;
        }
        // return nums;
    }
int main()
{
    int n;
    cin >> n;
    vector<int> num;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        num.push_back(x);
    }
    wiggleSort(num);
    for (int i = 0; i < n; i++){
        cout<<num[i];
    }
}