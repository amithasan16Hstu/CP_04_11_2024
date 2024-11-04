#include <bits/stdc++.h>
using namespace std;

int Morning( string s) {
    int count;

    if (s[0] == '0') {
        count = 9;  
    } else {
        count = (s[0] - '0') - 1;
    }
    for (int i = 0; i < 3; i++) {
        int current, next;

        if (s[i] == '0') {
            current = 10;
        } else {
            current = s[i] - '0';
        }
        if (s[i + 1] == '0') {
            next = 10;
        } else {
            next = s[i + 1] - '0';
        }


        count += abs(current - next);
    }

    return count + 4;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << Morning(s) << endl;
    }
    return 0;
}
