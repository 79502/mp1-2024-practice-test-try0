// Задача 1. Найти сумму целых чисел a и b.
// Если a + b >= INT_MAX, возвращать INT_MAX
// Если a + b <= INT_MIN, возвращать INT_MIN
#include<limits.h>
int sum_of_two_numbers(int a, int b)
{
  int sum;
  sum = a+b;
  if ((a>=INT_MAX) || (b>=INT_MAX))
    sum = INT_MAX; else {
  if (sum >= INT_MAX)
    sum = INT_MAX;
    }
    if ((a<=INT_MIN) || (b<=INT_MIN))
    sum = INT_MIN; else {
  if (sum <= INT_MIN)
    sum = INT_MIN;
    }
  return sum;
}
int main() {
  int a = 10, b = 3, summa;
  summa = sum_of_two_numbers(a, b);
}
