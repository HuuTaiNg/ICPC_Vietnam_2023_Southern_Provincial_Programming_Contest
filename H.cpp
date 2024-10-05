/*#include <iostream>
#include <math.h>
using namespace std;
int main() {
     int a, b, c, d;
     cin >> a >> b >> c >> d;
     int t = c/a;
     int i = 1;
     while (1) {
         if (a*i > c || b == 1 || d % c == 0) {
          cout << "-1";
          break;
         } 
         int t = a * i; 
         if ((a*i) % b != 0 && d % (a*i) != 0) {
               cout << a*i;
               break;
         }
         i++; 
     }
     return 0;
} */
#include <iostream>
using namespace std;
int main() {
     int a, b, c, d;
     cin >> a >> b >> c >> d;
     if (a % b == 0 || d % c == 0) {
          cout << "-1";
     }
     else {
          if (d < c) {
               int k = a/d + 1;
               while (1) {
                    int t = a*k;
                    if (t > c) {
                         cout << "-1";
                         return 0;
                    }
                    if (c % t == 0 && t % b != 0 && d % t != 0) {
                         cout << t;
                         return 0;
                    }
                    k++;
               }
          }
          else {
               int k = 1;
               while (1) {
                    int t = a*k;
                    if (t > c) {
                         cout << "-1";
                         return 0;
                    }
                    if (c % t == 0 && t % b != 0 && d % t != 0) {
                         cout << t;
                         return 0;
                    }
                    k++;
               } 
          }
     }
     return 0;
}
