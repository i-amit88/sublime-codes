#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> allsubsets;
void generate(vector<int> &subset, int i, vector<int> &nums)
{
    if (i == nums.size())
    {
        allsubsets.push_back(subset);
        return;
    }

    // ith element not taken
    generate(subset, i + 1, nums);

    // element taken
    subset.push_back(nums[i]);
    generate(subset, i + 1, nums);
    subset.pop_back();
}

vector<vector<int>> subsets(vector<int> &nums)
{
    vector<int> empty;
    generate(empty, 0, nums);
    return allsubsets;
}

int main()
{

    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    vector<int>empty;
    generate(empty,0,nums);
    for(auto subset:allsubsets){
        for(auto ele:subset){
            cout << ele <<" ";
        }
        cout<<endl;
    }


}
