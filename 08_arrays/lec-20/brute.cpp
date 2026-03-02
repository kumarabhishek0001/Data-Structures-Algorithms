#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{

    vector<int> arr = {-1, 0, 1, 2, -1, -4};
    int n = arr.size();
    set<vector<int>> uniques;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int sum = arr[i] + arr[j] + arr[k];

                if (sum == 0)
                {
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end());
                    uniques.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(uniques.begin(), uniques.end());

    for (auto &it : ans)
    {
        cout << "[ ";
        for (int x : it)
        {
            cout << x << " ";
        }
        cout << "]\n";
    }

    return 0;
}