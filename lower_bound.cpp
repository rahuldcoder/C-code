#include <bits/stdc++.h>
using namespace std;

int lowerBound(int arr[], int n, int key)
{
    int low = 0, high = n - 1, ans = -1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key)
        {
            ans = mid;
            high = mid - 1;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[10] = {1, 2, 3, 3, 3, 3, 3, 4, 4, 5};
    cout << lowerBound(arr, 10, 9) << endl;
}