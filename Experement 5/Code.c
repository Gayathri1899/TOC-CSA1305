#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n;

    printf("Enter the binary string: ");
    scanf("%s", str);

    n = strlen(str);

    // Check for valid binary characters
    for (i = 0; i < n; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            printf("Invalid Input! Only 0 and 1 are allowed.\n");
            return 0;
        }
    }

    // Check whether the string is a palindrome
    for (i = 0; i < n / 2; i++)
    {
        if (str[i] != str[n - i - 1])
        {
            printf("Rejected\n");
            return 0;
        }
    }

    printf("Accepted\n");

    return 0;
}
