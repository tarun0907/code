#include <bits/stdc++.h>
using namespace std;

/*
iii) Find the largest number less than N whose each digit is prime number
*/

bool isPrime(char c) {
   //checking if digit is prime or not
   return c == '2' || c == '3' || c == '5' || c == '7';
}
void decrease(string& n, int i) {
   /*
   if digit is not prime and is less than 7
   then decrementing it to nearest prime digit
   less than the digit
   */
   if (n[i] <= '2') {
      n.erase(i, 1);
      n[i] = '7';
   }else if (n[i] == '3') {
      n[i] = '2';
   }else if (n[i] <= '5') {
      n[i] = '3';
   }else if (n[i] <= '7') {
      n[i] = '5';
   }
   /*
   *if digit is greater than 7 making is 7 as 7 is the
   greatest prime digit 
   */
   else {
      n[i] = '7';
   }
   return;
}
string getPrimeDigitsNumber(string n) {
   for (int i = 0; i < n.length(); i++) {
      if (!isPrime(n[i])) {
         while (n[i] <= '2' && i >= 0) {
            i--;
         }
         if (i < 0) {
            i = 0;
         }
         decrease(n, i);
         for (int j = i + 1; j < n.length(); j++) {
             n[j] = '7';
         }
         break;
      }
   }
   return n;
}
int main() {
   string n = "221";
   cout << getPrimeDigitsNumber(n) << endl;
   return 0;
}