#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        int even = 0, odd = 0;
        
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            if (a[i] % 2 == 0) even++;
            else odd++;
        }

        // If min + max is even, array is already fashionable
        int min_a = *min_element(a.begin(), a.end());
        int max_a = *max_element(a.begin(), a.end());
        if ((min_a + max_a) % 2 == 0) {
            cout << 0 << endl;
        } else {
            // Minimum number of deletions to make all even or all odd
            cout << min(even, odd) << endl;
        }
    }
    return 0;
}
