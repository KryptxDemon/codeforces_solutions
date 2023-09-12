#include <bits/stdc++.h>
using namespace std;
 
int main (){
   int n;
   cin >> n;
   while (n--){
    string s;
    cin >> s;
    if (s.size() > 10){
 
      int numOfChar = s.size () -2;
      cout << s[0] << numOfChar << s[s.size() - 1] << endl;
    } else {
      cout << s << endl;
    }
 
      }
 }