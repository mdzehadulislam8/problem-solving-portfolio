#include <bits/stdc++.h>
using namespace std;

int prefixValue(const vector<int>& v) {
    int mx = 0, sum = 0;
    for (int x : v) {
        mx = max(mx, x);
        sum += mx;
    }
    return sum;
}

void solve() {
    int t;
    cin >> t;

    vector<vector<int>> joma(t); 

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        joma[i].resize(n); // resize inner vector to hold n elements
        for (int j = 0; j < n; j++) cin >> joma[i][j];
    }


    for (int i = 0; i < t; i++) {
        vector<int> a = joma[i];
        int n = a.size();

        int ans = prefixValue(a);

      
        for (int p = 0; p < n; p++) {
            for (int q = p+1; q < n; q++) {
                swap(a[p], a[q]);
                ans = max(ans, prefixValue(a));
                swap(a[p], a[q]); 
            }
        }

        cout << ans << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
}

/*
1. Why are we doing swaps?

The goal of this problem is to maximize the prefixValue.
You do not know in advance which two elements of the array should be swapped to get the maximum sum.
So, you try all possible pairs by swapping them one by one and checking the result.

Example:
For the array [10, 50, 20], swapping to [50, 10, 20] gives a larger prefix sum.
The code is trying to find this optimal position by checking every possible swap.


2. Function Call and Execution Order

The code works in the following sequence:

First, solve() is called.
After taking input, the main logic starts.

ans = prefixValue(a):
Before doing any swap, the prefix value of the original array is stored in ans as the initial best value.

Nested loops (p and q):

The loop starts with p = 0 and q = 1.

Step A (Swap):
swap(a[0], a[1]) is performed, so the array changes.

Step B (Function Call):
prefixValue(a) is called on the swapped array.
The function calculates and returns the prefix sum of this new array.

Step C (Compare):
Using max(ans, new_value), the code checks whether the new value is better than the previous best.

Step D (Backtrack):
swap(a[0], a[1]) is done again to restore the array to its original form.
Without this step, the next swap would be applied to a wrong (already modified) array.


3. What is the execution order? (Dry Run)

Assume the array a = [10, 20, 30].

Initial:
ans = prefixValue([10, 20, 30]) → 10 + 20 + 30 = 60.

Loop p = 0, q = 1:

Swap → [20, 10, 30].

Call prefixValue → Result = 20 + 20 + 30 = 70.

ans = max(60, 70) → ans becomes 70.

Swap back → [10, 20, 30].

Loop p = 0, q = 2:

Swap → [30, 20, 10].

Call prefixValue → Result = 30 + 30 + 30 = 90.

ans = max(70, 90) → ans becomes 90.

Swap back → [10, 20, 30].


4. How does the update happen?

Each time prefixValue(a) returns an integer value.
The max function compares two values:

ans = max(previous_best, current_result);

If the current_result is larger, ans is updated with that value.

*/
