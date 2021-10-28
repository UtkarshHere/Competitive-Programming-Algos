#include<bits/stdc++.h>
using namespace std;
bool isKaprekarNumber(int n) {
   if (n == 1) {
      return true;
   }
   int nSquare = n * n, digitsCount = 0;
   while (nSquare) {
      digitsCount++;
      nSquare /= 10;
   }
   nSquare = n * n;
   for (int i = 1; i < digitsCount; i++) {
      int parts = pow(10, i);
      if (parts == n) {
         continue;
      }
      int sum = nSquare / parts + nSquare % parts;
      if (sum == n) {
         return true;
      }
   }
   return false;
}
int main() {
   int n;
   cout<<"enter number : ";
   cin>>n;
   string result = isKaprekarNumber(n) ? "True" : "False";
   cout << result << endl;
   return 0;
}
