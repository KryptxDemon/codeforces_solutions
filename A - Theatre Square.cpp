#include <bits/stdc++.h>
using namespace std;
 
int main (){
   int n, m, a;
   cin >> n >> m >> a;
   long long l, b;
 
  if ( n % a == 0){
    l = n/a;
  } else {
    l = n/a + 1;
  } 
 
  if ( m % a == 0){
    b = m/a;
  } else {
    b = m/a + 1;
  } 
 
 
   cout << l*b;
 
}