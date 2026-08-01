#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, n;

    printf("Enter the binary string: ");
    scanf("%s", str);

    n = strlen(str);

    // Check for empty string
    if (n == 0)
    {
        printf("Rejected\n");
        return 0;
    }

    // Check for valid symbols
    for (i = 0; i < n; i++)
    {
        if (str[i] != '0' && str[i] != '1')
        {
            printf("Invalid Input! Only 0 and 1 are allowed.\n");
            return 0;
        }
    }

    // Grammar: S → 0A1
    if (str[0] == '0' && str[n - 1] == '1')
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}
