#include <stdio.h>
#include <stdbool.h>
bool isPalindrome(int num);
int main()
{

    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
    {
        printf("The number %d is Palindrome.\n", num);
    }

    else
    {
        printf("The number %d is not Palindrome.\n", num);
    }

    return 0;
}

bool isPalindrome(int num)
{
    int orig = num;
    int rev = 0;
    for (; num != 0; num /= 10)
    {
        rev = (rev * 10) + (num % 10);
    }

    return orig == rev;
}