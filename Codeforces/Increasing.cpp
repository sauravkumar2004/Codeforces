#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            cin >> ans[i];
        }

        sort(ans.begin(), ans.end());  // Sort the vector

        bool flag = true;
        for (int i = 1; i < n; i++) {
            if (ans[i - 1] == ans[i]) {  // Check for duplicates after sorting
                flag = false;
                break;
            }
        }

        if (flag) 
            cout << "YES\n";
        else 
            cout << "NO\n";
    }

    return 0;
}
