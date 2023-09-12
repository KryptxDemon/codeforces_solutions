#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int result = 0; 
 
    while (n--) {
        int a;
        cin >> a;
 
        if (a == 1) {
            result = 1; 
        }
    }
 
    if (result == 1) {
        cout << "Hard";
    } else {
        cout << "Easy";
    }
 
    return 0;
}