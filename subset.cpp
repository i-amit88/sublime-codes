#include <bits/stdc++.h>
using namespace std;

bool subsetsum(int arr[], int t[][16], int n, int sum)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sum; j++)
        {
            if (i == 0)
                t[i][j] = false;

            if (j == 0)
                t[i][j] = true;

            if (arr[i - 1] <= j)
            { // element should be less than sum

                t[i][j] = t[i][j - arr[j - 1]] || t[i - 1][j]; // left element and upper element
            }
            else
            {
                t[i][j] = t[i - 1][j];
            }
        }
    }
    return t[n][sum];
}
int main()
{
    int sum = 15, n = 5;
    int t[n+1][sum+1];
    memset(t,-1,sizeof(t));
    int arr[] = {1, 7, 3, 4, 9};
    cout << subsetsum(arr, t, n, sum);

    return 0;
}