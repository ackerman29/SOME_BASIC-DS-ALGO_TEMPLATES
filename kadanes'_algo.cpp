#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int maxSubarraySum(vector<int>& arr) {
    int n = arr.size();
    int maxSum = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int currentSum = 0;
            for (int k = i; k <= j; k++)
            {
                currentSum += arr[k];
            }
            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int maxSum = maxSubarraySum(arr);
    cout << "Maximum subarray sum is: " << maxSum << endl;

    return 0;
}
