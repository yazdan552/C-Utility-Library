#include "functions.h"

int isPrime(int n) { return 0; }
int factorial(int n) { return 0; }
int reverseNumber(int n) { return 0; }
int sumDigits(int n) { return 0; }
int countDigits(int n) { return 0; }
int gcd(int a, int b) {
    if (a < 0) a = -a;
    if( b < 0) b = -b;

    while(b != 0) {
        int reminder = a % b;
        a = b;
        b = reminder;
    }
    
     return a; 
    }
int lcm(int a, int b) { return 0; }
void reverseString(char str[]) {}
int isOdd(int n) { return 0; }
int isEven(int n)
{
    return n % 2 == 0;
}
int power(int base, int exp) { return 0; }