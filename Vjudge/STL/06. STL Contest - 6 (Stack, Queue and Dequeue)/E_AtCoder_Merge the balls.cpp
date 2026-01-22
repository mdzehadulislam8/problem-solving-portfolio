/**
 * Problem: Merge Balls (AtCoder)
 * * Description:
 * This program simulates a sequence of balls where identical adjacent balls 
 * merge into a single ball with an incremented value (x + 1). 
 * * Approach:
 * We use a Deque (Double-Ended Queue) to efficiently manage the sequence.
 * New balls are added to the 'right end' (back). After each addition, we 
 * trigger a recursive-style merge process (chain reaction) using a while loop.
 *
 * Time Complexity: O(N) - Each ball is pushed and popped at most once.
 * Space Complexity: O(N) - To store the sequence of balls.
 */

#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
    cin >> n;

    // Using deque to manage the sequence of balls
    deque<int> d;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        // Add the i-th ball to the right end of the sequence
        d.push_back(x);

        // Keep merging as long as there are at least two balls and the last two are equal
        while (d.size() > 1) {
            // Get the last ball (Rightmost)
            int last = d.back();
            d.pop_back();

            // Get the second to last ball
            int second_last = d.back();
            d.pop_back();

            if (last == second_last) {
                // If values are equal, merge them into a single ball of value x + 1
                d.push_back(last + 1);
            } else {
                // If values are different, put them back in the original order and stop merging
                d.push_back(second_last);
                d.push_back(last);
                break;
            }
        }
    }

    // The answer is the number of balls remaining in the deque
    cout << d.size() << endl;
}

int main(){ 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        solve();
}

