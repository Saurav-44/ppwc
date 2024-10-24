#include <stdio.h>

int calSumOfDigits(int num);

int main()
{

    printf("The sum is %d\n", calSumOfDigits(75));

    return 0;
}

int calSumOfDigits(int num)
{

    int sum = 0;
    while (num > 0)
    {
        int digit = num % 10;
        sum += digit;
        num /= 10;
    }

    return sum;
}