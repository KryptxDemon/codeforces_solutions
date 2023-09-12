#include <bits/stdc++.h>
   using namespace std;
 
   int main ()
   {
        int t;
        cin >> t;
        while (t--){
              int n;
              cin >> n;
 
              int best,winner;
              best = 0;
 
 
         for (int i = 0; i < n; i++){
                  int a,b;
                  cin >> a >> b;
 
          if (a <= 10){
            if (b > best){
 
               best = b;
               winner = i+1;
            }
          }   
         }     cout << winner << endl;
 
     }       
     return 0;
    }