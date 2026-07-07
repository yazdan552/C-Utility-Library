#include "functions.h"

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
void reverseString(char str[]) {}
int isOdd(int n) { return 0; }
int isEven(int n)
{
    return n % 2 == 0;
}
int power(int base, int exp) { return 0; }
int lcm(int a, int b) {
    int max = (a > b) ? a : b;
    while (1) {
        if (max % a == 0 && max % b == 0) {
            return max;
        }
        max++;
    }
}

int isPrime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
    }
}
