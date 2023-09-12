#include <bits/stdc++.h>
using namespace std; 
 
int main()
 { 
  int n;
  cin >> n;
  int value = 0;
  for (int i = 0; i < n; i++){
     int a;
     int b;
     int c;
 
     cin >> a >> b >> c;
 
     if ((a == 1) && (b == 1) && (c == 1)){
      value++;
     } else if ((a == 1) && (b ==1 ) && ( c == 0)){
      value++;
     } else if ((a == 0) && (b ==1 ) && ( c == 1)){
      value++;
     } else if ((a == 1) && (b ==1 ) && ( c == 0)){
      value++;
     } else if ((a == 1) && (b ==0 ) && ( c == 1)){
      value++;
     }
   
  } cout << value;
}