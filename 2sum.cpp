#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            int a = arr[i];
            int more = target - a;

            if (mpp.find(more) != mpp.end()) {
                return {mpp[more], i};
            }

            mpp[arr[i]] = i;
        }

        return {-1, -1};
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    Solution obj;
    vector<int> ans = obj.twoSum(arr, target);

    cout << "Indices: ";
    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}