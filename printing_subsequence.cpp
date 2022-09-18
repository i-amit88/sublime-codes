#include <bits/stdc++.h>
using namespace std;
void subsequence(int idx, vector<int> &arr, int ds[], int n)
{
    if (idx >= n)
    {
        for (auto ele : arr)
        {
            cout << ele << " ";
        }
        if (arr.size() == 0)
        {
            cout << "{}";
        }
        cout << endl;
        return;
    }
    

    // take the element
    arr.push_back(ds[idx]);
    subsequence(idx + 1, arr, ds, n);
    // not take element
    arr.pop_back();
    subsequence(idx + 1, arr, ds, n);
}

int main()
{
    vector<int> arr = {};
    int ds[] = {3, 1, 2};
    subsequence(0, arr, ds, 3);
}