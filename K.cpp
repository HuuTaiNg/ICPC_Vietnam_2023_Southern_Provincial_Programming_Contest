#include <iostream>
#include <vector>
using namespace std;
int main() {
     int n;
     vector <int> a;
     vector <int> save;
     cin >> n;
     for (int i = 0; i < n; i++) {
          int t;
          cin >> t;
          a.push_back(t);
          save.push_back(1);
     }
     int max = 1;
     for (int i = 1; i < n; i++) {
          if (a[i] > save[i-1]) {
               save[i] = save[i-1] + 1;
               int k = 1;
               int kt = 0;
               int j;
               for (j = i + 1; j <= i + save[i] - 1; j++) {
                    if (j >= n) {
                         kt = 1;
                         break;
                    }
                    if (a[j] < save[i] - k) {
                         kt = 1;
                         break;
                    }
                    k++;
               }
               if (kt == 1) {
                    save[i] = a[j]+1;
                   
               }
          }
          else {
               save[i] = a[i];
          }
          
          if (max < save[i]) {
               max = save[i];
          }
     }
     
     cout << max;
     return 0;
} 

