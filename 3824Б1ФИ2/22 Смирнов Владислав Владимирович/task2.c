// Задача 2. Найти произведение натуральных чисел a и b
// Если a * b >= UINT_MAX, возвращать UINT_MAX
#include<limits.h>
unsigned int product_of_two_numbers(unsigned int a, unsigned int b)
{
    int pr;
    pr = a * b;
    if ((a >= INT_MAX) || (b >= INT_MAX))
        pr = INT_MAX; else {
        if (pr >= INT_MAX)
            pr = INT_MAX;
    }
    return pr;
}
int main() {
    int a = 10, b = 3, pro;
    pro = product_of_two_numbers (a, b);
}
