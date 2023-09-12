#include <bits/stdc++.h>
using namespace std;

int main (){
 int n;
 cin >> n;
 int x = 0;

 for (int i = 0; i < n; i++){
   string value;
   cin >> value;
   if ((value == "++X") || (value == "X++")){
      x++;
   } else if ((value == "--X") || (value == "X--")){
      x--;
   }
    
 } cout << x;
} 