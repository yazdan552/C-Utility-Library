# C Utility Library

یک کتابخانه ابزار کاربردی در زبان C شامل توابع ریاضی و رشته‌ای.

## توابع موجود

- `isPrime(int n)` - بررسی عدد اول
- `factorial(int n)` - محاسبه فاکتوریل
- `reverseNumber(int n)` - معکوس کردن عدد
- `sumDigits(int n)` - جمع ارقام
- `countDigits(int n)` - تعداد ارقام
- `gcd(int a, int b)` - بزرگترین مقسوم‌علیه مشترک
- `lcm(int a, int b)` - کوچکترین مضرب مشترک
- `reverseString(char str[])` - معکوس کردن رشته
- `isOdd(int n)` - بررسی فرد بودن
- `isEven(int n)` - بررسی زوج بودن
- `power(int base, int exp)` - محاسبه توان

## اعضای تیم

- **لیدر:** محمد مهدی صمیمی دوست - `isEven`
- آرش بزمایه - `isPrime`
- فاطمه بی‌تاب - `factorial`
- امیر حسین علیزاده - `reverseNumber`
- محمد امین حیدری - `sumDigits`
- ابوالفضل راستی - `countDigits`
- یاسین رزمجویی - `gcd`
- عنایت زاغریان - `lcm`
- تیاناز طالب‌زاده - `reverseString`
- زهرا قرخلووی - `isOdd`
- علی نیازمند - `power`

## نحوه استفاده

```c
#include "functions.h"

int main() {
    int result = isPrime(7);  // returns 1
    return 0;
}
```
