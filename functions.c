#include "functions.h"
#include <string.h>
int factorial(int n) { return 0; }
int reverseNumber(int n)
{
    int reverse = 0;

    while (n != 0)
    {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }

    return reverse;
}
int sumDigits(int n) { return 0; }

int countDigits(int n)
{
    int count = 0;
    if (n == 0)
        return 1;
    if (n < 0)
        n = -n;
    while (n != 0)
    {
        count++;
        n /= 10;
    }
    return count;
}

int gcd(int a, int b)
{
    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    while (b != 0)
    {
        int reminder = a % b;
        a = b;
        b = reminder;
    }

    return a;
}
void reverseString(char str[])
{
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int isOdd(int n) { return 0; }
int isEven(int n)
{
    return n % 2 == 0;
}

int lcm(int a, int b)
{
    int max = (a > b) ? a : b;
    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            return max;
        }
        max++;
    }
}

int isPrime(int n)
{
    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int power(int base, int exp) {
    int result = 1;
    for (int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}
