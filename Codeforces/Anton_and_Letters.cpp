#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    getline(cin, s); // Use getline to read the entire input, including spaces

    set<char> st;
    for (char x : s) {
        // Insert only lowercase letters into the set
        if (islower(x)) {
            st.insert(x);
        }
    }

    cout << st.size() << endl;
}
